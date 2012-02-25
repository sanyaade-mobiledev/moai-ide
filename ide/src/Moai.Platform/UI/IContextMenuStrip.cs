﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Moai.Platform.UI
{
    public interface IContextMenuStrip : IToolStripDropDownMenu
    {
        List<IToolStripItem> Items { get; }
    }
}
