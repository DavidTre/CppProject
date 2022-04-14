#pragma once
#include "Bedroom.h"
#include "Junction.h"
#include "MainRooms.h"

class CHouse
{
public:
	CHouse() :m_pCurrentRoom(NULL)
	{

	}

	void SetLocation();


	CRoom* getCurrentRoom()
	{
		return m_pCurrentRoom;
	}

	void moveBedroom()
	{
		m_pCurrentRoom = &m_Bedroom;
	}

	void moveBedroomSpare()
	{
		m_pCurrentRoom = &m_BedroomSpare;
	}

	void moveBedroomBig()
	{
		m_pCurrentRoom = &m_BedroomBig;
	}

	void moveJunctionLower()
	{
		m_pCurrentRoom = &m_JunctionLower;
	}

	void moveJunctionUpper()
	{
		m_pCurrentRoom = &m_JunctionUpper;
	}

	void moveKitchen()
	{
		m_pCurrentRoom = &m_Kitchen;
	}

	void moveLivingRoom()
	{
		m_pCurrentRoom = &m_LivingRoom;
	}

	void moveVeranda()
	{
		m_pCurrentRoom = &m_Veranda;
	}

	void moveEntrance()
	{
		m_pCurrentRoom = &m_Entrance;
	}

	void moveOut()
	{
		m_pCurrentRoom = &m_Out;
	}

protected:
	CBedroom m_Bedroom;
	CBedroom m_BedroomSpare;
	CBedroom m_BedroomBig;

	CJunction m_JunctionLower;
	CJunction m_JunctionUpper;

	CMainRooms m_Kitchen;
	CMainRooms m_LivingRoom;
	CMainRooms m_Veranda;
	CMainRooms m_Entrance;
	CMainRooms m_Out;

	CRoom* m_pCurrentRoom;
};


