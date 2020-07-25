//--------------------------------------------------------------------------------------
// File: REM-Engine.cpp
//
// Copyright (c) Microsoft Corporation. All rights reserved.
//--------------------------------------------------------------------------------------
#include "DXUT.h"
#include "resource.h"
#include "Director.h"
#include "TestScene.h"
#include <iostream>

HRESULT CALLBACK OnD3D9CreateDevice(IDirect3DDevice9* pd3dDevice, const D3DSURFACE_DESC* pBackBufferSurfaceDesc,
    void* pUserContext)
{
    Director::getInstance()->DirectorInit();
    return S_OK;
}


void CALLBACK OnD3D9FrameRender(IDirect3DDevice9* pd3dDevice, double fTime, float fElapsedTime, void* pUserContext)
{
    HRESULT hr;

    // Clear the render target and the zbuffer 
    V(pd3dDevice->Clear(0, NULL, D3DCLEAR_TARGET | D3DCLEAR_ZBUFFER, D3DCOLOR_ARGB(0, 45, 50, 170), 1.0f, 0));

    // Render the scene
    if (SUCCEEDED(pd3dDevice->BeginScene()))
    {
        Director::getInstance()->UpdateScene(); //지금 디렉터가 가지고 있는 씬 업데이트
        V(pd3dDevice->EndScene());
    }
}

void CALLBACK OnMouse(bool bLeftButtonDown, bool bRightButtonDown, bool bMiddleButtonDown, bool bSideButton1Down, bool bSideButton2Down, int nMouseWheelDelta, int xPos, int yPos, void* pUserContext)
{

}

LRESULT CALLBACK MsgProc(HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam,
    bool* pbNoFurtherProcessing, void* pUserContext)
{
    return 0;
}

void CALLBACK OnD3D9DestroyDevice(void* pUserContext)
{
    exit(0);
}

int main(void)
{
    // Enable run-time memory check for debug builds.
#if defined(DEBUG) | defined(_DEBUG)
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
#endif

    // Set the callback functions
    DXUTSetCallbackD3D9DeviceCreated(OnD3D9CreateDevice);
    DXUTSetCallbackD3D9FrameRender(OnD3D9FrameRender);
    DXUTSetCallbackD3D9DeviceDestroyed(OnD3D9DestroyDevice);
    DXUTSetCallbackMsgProc(MsgProc);
    DXUTSetCallbackMouse(OnMouse);

    // TODO: Perform any application-level initialization here


    // Initialize DXUT and create the desired Win32 window and Direct3D device for the application
    DXUTInit(true, true); // Parse the command line and show msgboxes
    DXUTSetHotkeyHandling(true, true, true);  // handle the default hotkeys
    DXUTSetCursorSettings(true, true); // Show the cursor and clip it when in full screen
    DXUTCreateWindow(L"REM-Engine");
    DXUTCreateDevice(D3D_FEATURE_LEVEL_9_1, true, 1280, 720);

    // Start the render loop
    DXUTMainLoop();

    // TODO: Perform any application-level cleanup here

    return DXUTGetExitCode();
}


