#include "House.h"

void CHouse::SetLocation()
{
	//Bedroom
	m_Bedroom.setDescr("Your bedroom... what a mess it is. Clothes on a chair, a bit on your work-desk, and books scattered along a chest of drawers. Here you hold all of your electrical equipment, and of course, your bed. Hard as a rock at nights, soft as a cloud during the mornings.\n");

	//Spare
	m_BedroomSpare.setDescr("The spare room... not too long ago it belonged to your brother, before he left to study.Now it's a spare room that is used to hold spare equipment and be used as an indoor cycling space for whoever wants to really.\n");

	//Parents
	m_BedroomBig.setDescr("The bedroom of your parents is pretty large. It has a wardrobe considerably larger than the one in your room. You don't have much to do here, except look out of a large window that looks towards the mediterranean sea.\n");

	//Hallway
	m_JunctionLower.setDescr("This so called 'hallway', more appropriately named an intersection, is where you decide whether you want to go to the kitchen, living room, upstairs or to the toilet (which you do not need).\n");

	//Up
	m_JunctionUpper.setDescr("Another intersection. Here you have the option to go to a spare room, your bedroom, your parents bedroom, or go back down. There is a toilet here, but you don't need to go there just yet. There is also an attic, but you can't get there just yet.\n");

	//Kitchen
	m_Kitchen.setDescr("This kitchen is small, so you don't really need to spend 5 minutes looking for things. It's your imagination as to what is in this kitchen :). It also has a back door leading to a veranda, linked with the living room.\n");

	//Living Room
	m_LivingRoom.setDescr("Here is the living room. It has one large table which can be used for meals or game-nights. It has a medium-sized television, with 2 sofas surrounding it and one armchair to the side, and in between that theres a little table for the remotes, and whatever you would like to be on it.\n");

	//Veranda
	m_Veranda.setDescr("The veranda. It's pretty small, but that's fine. It has plants scattered along the edge of it, 2 clothing drying stands with a backdoor leading to the kitchen. Occasionally cats come around for a few walks and sleeps, but eventually they go away.\n");

	//Entrance
	m_Entrance.setDescr("This entrance is simple, it only has what you would need: an area for your shoes, a coat hanger, a chest of drawers to store keys and important documents, and of course, a computer with two servers by it...\n");

	//You left
	m_Out.setDescr("You have left the house.\n");
}
