// Copyright (c) 2010-2011 Zipline Games, Inc. All Rights Reserved.
// http://getmoai.com

#ifndef	MOAICORE_H
#define	MOAICORE_H

#include <moaicore/pch.h>

#include <moaicore/MOAIAction.h>
#include <moaicore/MOAIAnim.h>
#include <moaicore/MOAIAnimCurve.h>
#include <moaicore/MOAIAnimPlayer.h>
#include <moaicore/MOAIBrushLibrary.h>
#include <moaicore/MOAIButtonSensor.h>
#include <moaicore/MOAICamera2D.h>
#include <moaicore/MOAICameraFitter.h>
#include <moaicore/MOAICheckpoint.h>
//#include <moaicore/MOAICollisionMgr.h>
#include <moaicore/MOAIColor.h>
#include <moaicore/MOAICompassSensor.h>
#include <moaicore/MOAIContentLibrary2D.h>
#include <moaicore/MOAIData.h>
#include <moaicore/MOAIDataIOAction.h>
#include <moaicore/MOAIDebugLines.h>
#include <moaicore/MOAIFileCache.h>
#include <moaicore/MOAIFont.h>
#include <moaicore/MOAIForceAction.h>
#include <moaicore/MOAIFrame.h>
#include <moaicore/MOAIGfxPrim2D.h>
#include <moaicore/MOAIGrid.h>
#include <moaicore/MOAIHttpTask.h>
#include <moaicore/MOAIIndexBuffer.h>
#include <moaicore/MOAIInputDevice.h>
#include <moaicore/MOAIInputMgr.h>
#include <moaicore/MOAIJoystickSensor.h>
#include <moaicore/MOAIKeyboardSensor.h>
#include <moaicore/MOAILayer2D.h>
#include <moaicore/MOAILayerBridge2D.h>
#include <moaicore/MOAILevelSensor.h>
#include <moaicore/MOAILocationSensor.h>
#include <moaicore/MOAILog.h>
#include <moaicore/MOAILogMessages.h>
#include <moaicore/MOAILuaScript.h>
//#include <moaicore/MOAIMultiShape2D.h>
#include <moaicore/MOAINinePatch.h>
#include <moaicore/MOAINode.h>
#include <moaicore/MOAINodeHarness.h>
#include <moaicore/MOAINodeMgr.h>
#include <moaicore/MOAIOscillator.h>
#include <moaicore/MOAIParticleEmitter.h>
#include <moaicore/MOAIParticleEngine.h>
#include <moaicore/MOAIParticleForce.h>
#include <moaicore/MOAIParticleScript.h>
#include <moaicore/MOAIParticleState.h>
#include <moaicore/MOAIParticleSystem.h>
#include <moaicore/MOAIPartition.h>
#include <moaicore/MOAIPolar.h>
#include <moaicore/MOAIPointerSensor.h>
#include <moaicore/MOAIPrim.h>
//#include <moaicore/MOAIQuad.h>
//#include <moaicore/MOAIRect.h>
#include <moaicore/MOAIScriptNode.h>
#include <moaicore/MOAISensor.h>
#include <moaicore/MOAISerializer.h>
#include <moaicore/MOAIShader.h>
#include <moaicore/MOAISim.h>
#include <moaicore/MOAISimpleShader.h>
#include <moaicore/MOAISlippyMap.h>
#include <moaicore/MOAISprite2D.h>
#include <moaicore/MOAISpriteLibrary.h>
#include <moaicore/MOAISurfaceLibrary2D.h>
#include <moaicore/MOAITextBox.h>
#include <moaicore/MOAITextSpoolAction.h>
#include <moaicore/MOAITexture.h>
#include <moaicore/MOAIThread.h>
#include <moaicore/MOAITilemap.h>
#include <moaicore/MOAITileLibrary.h>
#include <moaicore/MOAITimer.h>
#include <moaicore/MOAITouchSensor.h>
#include <moaicore/MOAITransform2D.h>
#include <moaicore/MOAITransformBase2D.h>
#include <moaicore/MOAITransition.h>
#include <moaicore/MOAIVertexBuffer.h>
#include <moaicore/MOAIVertexFormat.h>
#include <moaicore/MOAIViewport.h>
#include <moaicore/MOAIXmlParser.h>

#if USE_BOX2D
	#include <moaicore/MOAIBox2DArbiter.h>
	#include <moaicore/MOAIBox2DBody.h>
	#include <moaicore/MOAIBox2DDebugDraw.h>
	#include <moaicore/MOAIBox2DFixture.h>
	#include <moaicore/MOAIBox2DWorld.h>
#endif

#if USE_CHIPMUNK
	#include <moaicore/MOAICp.h>
	#include <moaicore/MOAICpArbiter.h>
	#include <moaicore/MOAICpBody.h>
	#include <moaicore/MOAICpConstraint.h>
	#include <moaicore/MOAICpDebugDraw.h>
	#include <moaicore/MOAICpShape.h>
	#include <moaicore/MOAICpSpace.h>
#endif

#if USE_FMOD
	#include <moaicore/MOAIFmod.h>
	#include <moaicore/MOAIFmodChannel.h>
	#include <moaicore/MOAIFmodSound.h>
#endif

//================================================================//
// moaicore
//================================================================//
namespace moaicore {

	//----------------------------------------------------------------//
	void			InitGlobals			( USGlobals* globals );
}

#endif