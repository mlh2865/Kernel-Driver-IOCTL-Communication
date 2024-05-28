#pragma once

#include <iostream>
#include <stdlib.h>

namespace Offsets
{
    constexpr std::ptrdiff_t dwEntityList = 0x19A3328;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x180DB18;
    constexpr std::ptrdiff_t dwViewMatrix = 0x1A052D0;
    //client.dll.cs
    constexpr std::ptrdiff_t m_iTeamNum = 0x3C3;
    constexpr std::ptrdiff_t m_iHealth = 0x324;
    constexpr std::ptrdiff_t m_hPlayerPawn = 0x7DC;
    constexpr std::ptrdiff_t m_sSanitizedPlayerName = 0x740;
    constexpr std::ptrdiff_t m_clrRender = 0xA7B;
    constexpr std::ptrdiff_t m_vecOrigin = 0x548;
    constexpr std::ptrdiff_t m_pGameSceneNode = 0x308;
    constexpr std::ptrdiff_t m_ArmorValue = 0x22C0;
}
