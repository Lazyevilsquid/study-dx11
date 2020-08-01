#include "DXUT.h"
#include "Application.h"

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
#include <tchar.h>
#include "Text.h"

//LPD3DXFONT m_pFont;
//RECT rt;    
//TCHAR stringa[100];
int g_fps;
Text* g_textfps = new Text();

HRESULT CALLBACK OnD3D9CreateDevice(IDirect3DDevice9* pd3dDevice, const D3DSURFACE_DESC* pBackBufferSurfaceDesc,
    void* pUserContext)
{
    Director::getInstance()->DirectorInit();
    g_textfps->TextInit();

  /*  D3DXCreateFont(DXUTGetD3D9Device(), 20, 0, FW_NORMAL, 1, FALSE, DEFAULT_CHARSET,
        OUT_DEFAULT_PRECIS, DEFAULT_QUALITY, DEFAULT_PITCH | FF_DONTCARE,
        L"System", &m_pFont);*/

    //SetRect(&rt, 10, 10, 0, 0);
 

    return S_OK;
}


void CALLBACK OnD3D9FrameRender(IDirect3DDevice9* pd3dDevice, double fTime, float fElapsedTime, void* pUserContext)
{
    HRESULT hr;

    // Clear the render target and the zbuffer 
    V(pd3dDevice->Clear(0, NULL, D3DCLEAR_TARGET | D3DCLEAR_ZBUFFER, D3DCOLOR_ARGB(0, 45, 50, 170), 1.0f, 0));

    // Render the scene
    if (SUCCEEDED(pd3dDevice->BeginScene()))
    
       g_fps = DXUTGetFPS();
       wsprintf(g_textfps->_string, TEXT("FPS: %d"), g_fps);
       g_textfps->TextDraw(g_textfps->_string, 10, 10, 0, 0, Color::White());

       Director::getInstance()->UpdateScene(); //지금 디렉터가 가지고 있는 씬 업데이트
       V(pd3dDevice->EndScene());
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
    g_textfps->Release();
   exit(0);
}

Application::Application()
{
    _isWindow = false;
    _width = 1280;
    _height = 720;
    _title = L"Rem-Engine";
}

Application::~Application() { }

void Application::Init(Scene* scene)
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
    DXUTCreateWindow(_title.c_str());
    DXUTCreateDevice(D3D_FEATURE_LEVEL_9_1, _isWindow , 1280, 720);

    Director::getInstance()->SetScene(scene);

    DXUTMainLoop();
}
int Application::Exit()
{
    return DXUTGetExitCode();
}