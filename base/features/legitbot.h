#pragma once
// used: winapi includes, singleton
#include "../common.h"
// used: usercmd
#include "../sdk/datatypes/usercmd.h"
// used: baseentity
#include "../sdk/entity.h"

// @note: FYI - https://www.unknowncheats.me/forum/counterstrike-global-offensive/137492-math-behind-hack-1-coding-better-aimbot-stop-using-calcangle.html

class CLegitBot : public CSingleton<CLegitBot>
{
public:
	// Get
	void Run(CUserCmd* pCmd, CBaseEntity* pLocal, bool& bSendPacket);
private:
	// Main
	/* aimbot, smooth, etc */
	void Aimbot(CUserCmd* pCmd, CBaseEntity* pLocal, bool& bSendPacket);
	int GetClosestByCrosshair(CBaseEntity* pLocal);
	QAngle Smooth(QAngle angles, QAngle target_angles);
	float CalcAnglesDistance(QAngle angles1, QAngle angles2);
	bool EnnemieInFov(QAngle viewAngles, QAngle anglesToAim);
	float CalcDiffDegrees(float alpha, float beta);
	// Check
	/* is entity valid */
};
