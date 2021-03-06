﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Drawing;
using System.IO;
using Moai.Platform.Management;
using Moai.Platform.Templates.Solutions;

namespace Moai.Templates.Solutions
{
    public class StandardTemplate : BaseTemplate
    {
        public override string TemplateName
        {
            get { return "Standard Game"; }
        }

        public override string TemplateDescription
        {
            get { return "an IDE managed, Moai project with Lua as the primary scripting language"; }
        }

        public override Bitmap TemplateIcon
        {
            get { return null; }
        }

        /// <summary>
        /// Creates a new solution using the data requested.
        /// </summary>
        /// <param name="data">The solution creation data, usually derived from the user's input in a NewSolutionForm.</param>
        /// <returns>A new solution that can be loaded.</returns>
        public override Solution Create(SolutionCreationData data)
        {
            // Create the new, empty solution on disk.
            Solution s = null;
            if (data.SolutionDirUsed)
                s = Solution.Create(data.SolutionDirName, Path.Combine(data.Path, data.SolutionDirName));
            else
                s = Solution.Create(data.Name, Path.Combine(data.Path, data.Name));

            // Create the new, empty project on disk.
            Project p = null;
            if (data.SolutionDirUsed)
                p = Project.Create(data.Name, Path.Combine(Path.Combine(data.Path, data.SolutionDirName), data.Name));
            else
                p = Project.Create(data.Name, Path.Combine(data.Path, data.Name));

            // Create a new file associated with the project.
            Moai.Platform.Management.File f = new Moai.Platform.Management.File(p, p.ProjectInfo.Directory.FullName, "Main.lua");
            StreamWriter w = new StreamWriter(f.FileInfo.FullName);
            w.WriteLine("-- Main game entry point.");
            w.WriteLine();
            w.Close();

            // Add the file to the project.
            p.AddFile(f);
            
            // Save the project back to disk.
            p.Save();

            // Add the project to the solution.
            s.Projects.Add(p);

            // Save the solution back to disk.
            s.Save();

            // Return the new solution.
            return s;
        }
    }
}
