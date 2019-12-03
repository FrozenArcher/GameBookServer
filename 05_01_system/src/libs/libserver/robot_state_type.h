#pragma once

enum RobotStateType
{
    RobotState_HttpRequest = 0,		// http请求

    RobotState_Login_Connectting,	// 正在链接 Login
    RobotState_Login_Connectted,	// 链接成功
    RobotState_Login_Logined,       // 登录成功

    //RobotState_Login_CreatePlayer,   // 创建角色
    RobotState_Login_SelectPlayer,   // 选择角色

    RobotState_Game_Connectting,	// 正在链接 Game
    RobotState_Game_Connectted,	    // 链接成功
    RobotState_Game_Logined,        // 登录成功

    RobotState_Space_EnterWorld,     // 进入地图

    RobotState_End,
};

const char RobotStateTypeName[][255] = {
    "[     ] HttpRequest :",
    "[Login] Connectting :",

    "[Login] Connectted  :",
    "[Login] Logined     :",

    //"[Login] CreatePlayer:",
    "[Login] SelectPlayer:",

    "[Game ] Connectting :",
    "[Game ] Connectted  :",
    "[Game ] Logined     :",

    "[Space] EnterWorld  :",
};

const char RobotStateTypeShortName[][255] = {
    "HttpRequest",

    "Login-Connectting",
    "Login-Connectted",
    "Login-Logined",
    //"Login-CreatePlayer",
    "Login-SelectPlayer",

    "Game-Connectting",
    "Game-Connectted",
    "Game-Logined",

    "Space-EnterWorld",
};

inline const char* GetRobotStateTypeShortName(RobotStateType stateType)
{
    if (stateType < 0 || stateType >= RobotState_End)
    {
        return "unknown";
    }

    return RobotStateTypeShortName[stateType];
}


inline const char* GetRobotStateTypeName(RobotStateType stateType)
{
    if (stateType < 0 || stateType >= RobotState_End)
    {
        return "unknown";
    }

    return RobotStateTypeName[stateType];
}