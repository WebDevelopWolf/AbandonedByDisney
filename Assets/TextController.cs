using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class TextController : MonoBehaviour {

	public Text text;
	
	private enum States {gate, courtyard, baloo, palace_0, palace_1, floorplan, kitchen, bathroom, rooms, stairs, rooms_1, innerCourtyard, python, lounge, mascots, tables, breakRoom, 
						hallway, charPrep, charPrep_1, costumes, mickey, charPrep_2, ending};
	private States myState;
	private bool floorplan_check;

	// Use this for initialization
	void Start () {
		myState = States.gate;
		floorplan_check = false;
		//Game Intro
		text.text = "Press SPACE to start...";
		text.alignment = TextAnchor.UpperCenter;
	}
	
	// Update is called once per frame
	void Update () {
		print (myState);
		if 		(myState == States.gate) 				{gate();} 
		else if (myState == States.courtyard) 			{courtyard();}
		else if (myState == States.baloo) 				{baloo();}
		else if (myState == States.palace_0)			{palace_0();}
		else if (myState == States.floorplan)			{floorplan();}
		else if (myState == States.palace_1)			{palace_1();}
		else if (myState == States.kitchen)				{kitchen();}
		else if (myState == States.bathroom)			{bathroom();}
		else if (myState == States.rooms)				{rooms();}
		else if (myState == States.stairs)				{stairs();}
		else if (myState == States.rooms_1)				{rooms_1();}
		else if (myState == States.innerCourtyard)		{innerCourtyard();}
		else if (myState == States.python)				{python();}
		else if (myState == States.lounge)				{lounge();}
		else if (myState == States.mascots)				{mascots();}
		else if (myState == States.tables)				{tables();}
		else if (myState == States.breakRoom)			{breakRoom();}
		else if (myState == States.hallway)				{hallway();}
		else if (myState == States.charPrep)			{charPrep();}
		else if (myState == States.charPrep_1)			{charPrep_1();}
		else if (myState == States.costumes)			{costumes();}
		else if (myState == States.mickey)				{mickey();}
		else if (myState == States.charPrep_2)			{charPrep_2();}
		else if (myState == States.ending)				{ending();}
	}
	
	 void gate () {
		if (Input.GetKeyDown(KeyCode.Space) || Input.GetKeyDown(KeyCode.UpArrow)) {
			//Set text back to the left
			text.alignment = TextAnchor.UpperLeft;
			//Backstory
			text.text = "Near the beachside city of Emerald Isle in North Carolina, Disney began construction of 'Mowgli's Palace' in the late 1990s." + 
			"The concept was a Jungle-themed resort with a large, Palace in the centre. Disney blew $30 million on the place... Then they abandoned it. " + 
			"Mowgli's Palace was controversial from the start. A ton of high-priced land was questionably obtained for the project. " + 
			"The houses razed, the land cleared, and there wasn't a thing anyone could do or say about it. Construction was complete. " + 
			"Visitors stayed at the resort, the surrounding communities were flooded with traffic and irate tourists. Then it all just stopped… \n\nPress [Down] to continue...";
		}
		if (Input.GetKeyDown(KeyCode.DownArrow)) {
			text.alignment = TextAnchor.UpperLeft;
			// Outside the main gate
			text.text = "You figured it might be cool to do some 'Urban Exploration' at Mowgli's Palace. " + 
				"Take some photos, write about your experience, and probably see if there was anything you could take home as a memento. " + 
				"In the end you could barely find the place. All you had to go on was an old-as-hell map you received in the mail back in the 90s. Locals were no help either, " + 
				"they just sneered at you and made rude gestures the second you managed to say 'Where would I find Mowgli's---' " + 
				"When you finally make it, you are in awe when you reach the front gates of the resort. " + 
				"Hanging on the gate is a sheet of metal, with hand-painted letters scrawled in black. 'ABANDONED BY DISNEY'. " + 
				"The gates were open enough to walk through. \n\nPress [G] to walk through the gate… ";
		}
		if (Input.GetKeyDown(KeyCode.G)) 										{myState = States.courtyard;}
	 }
	 
	void courtyard () {
		//Arrive in courtyard
		text.text = "The inner grounds of the place were just as overgrown as the entryway. Palm trees stood untended and ragged among piles of their own coconuts. " + 
		"Banana plants similarly stood in their own stinking, bug-riddled refuse. There was this sort of clash between order and chaos, " + 
		"as carefully planted rows of perennial flowers mixed with obnoxious tall weeds. All that remained of any outdoor structures were broken and rotting. " + 
		"What was most likely an information booth was now simply a pile of assorted debris ravaged by weather. As you look ahead you see a statue and the entrance to the main building. " + 
		"\n\nPress [S] to investigate the Statue, or [P] to investigate the Palace.";
		if (Input.GetKeyDown(KeyCode.S)) 										{myState = States.baloo;} 
		else if (Input.GetKeyDown(KeyCode.P)) 									{myState = States.palace_0;}
	}
	
	void baloo () {
		//Arrive in courtyard
		text.text = "On closer inspection you see the statue is of Baloo, the friendly bear from the Jungle Book, " + 
		"which stands in a sort of courtyard in front of the main building. He is frozen in a jovial wave toward no one, staring into empty space with a silly, " + 
		"toothy grin as bird shit covers whole swaths of his 'fur' and vines ensnare his platform. You take a photo and look ahead through the viewfinder to the main building. " + 
		"\n\nPress [P] to continue to the Palace.";
		if (Input.GetKeyDown(KeyCode.P)) 										{myState = States.palace_0;} 
	}
	
	void palace_0 () {
		//Arrive inside w/o floor plan
		text.text = "You approach the the Palace to find the outside of the building covered in graffiti where the original paint hadn't peeled and chipped away. " + 
		"The front doors have been taken off their hinges and stolen. Above the gaping maw where they had been, someone had painted ‘ABANDONED BY DISNEY’. " + 
		"You step inside to a place so stark, that you think people had stolen the very decoration off the walls. " + 
		"Anything that was too big like counters and desks were all resting amid this empty chamber that amplifies each step. " + 
		"Out of the corner of your eye you see a piece of paper on the floor and three dark doorways." + 
		"\n\nPress [P] to examine the paper, [L] to take the doorway on the left, [M] to take the doorway in the middle or [R] to take the doorway on the right.";
		if (Input.GetKeyDown(KeyCode.P)) 										{myState = States.floorplan;} 
		else if (Input.GetKeyDown(KeyCode.L))									{myState = States.kitchen;}
		else if (Input.GetKeyDown(KeyCode.M))									{myState = States.bathroom;}
		else if (Input.GetKeyDown(KeyCode.R))									{myState = States.rooms;}
	}
	
	void floorplan () {
		//Check the floorplan
		text.text = "You carefully pick up the damp page. It's dirty, old and faded but you can just about make out a floorplan of the resort, showing the rooms, a kitchen and a bathroom. " + 
		"\n\nPress [T] to take the floor plan or [L] to leave it where it is.";
		if (Input.GetKeyDown(KeyCode.T)) 										{myState = States.palace_1; floorplan_check = true;} 
		else if (Input.GetKeyDown(KeyCode.L))									{myState = States.palace_0;}
	}
	
	void palace_1 () {
		//Arrive inside w/ floor plan
		text.text = "You check the floorplan for all the locations that might seem in any way interesting. " + 
		"\n\nPress [K] to investigate the Kitchen, [B] to investigate the Bathrooms or [R] to look in the Rooms.";
		if (Input.GetKeyDown(KeyCode.K)) 										{myState = States.kitchen;} 
		else if (Input.GetKeyDown(KeyCode.B))									{myState = States.bathroom;}
		else if (Input.GetKeyDown(KeyCode.R))									{myState = States.rooms;}
	}
	
	void kitchen () {
		//Arrive in the kitchen
		text.text = "You step into an industrial food prep area with all the appliances and space. Every glass surface is broken, every door stolen, " + 
		"every metal surface dented. The entire place smelled like very old piss. The huge freezer, not even remotely cool now, has rows of empty shelf space. " + 
		"At the back, hooks hang from the ceiling, probably for cuts of meat. As you stand inside for a moment, you notice they are subtly swinging. Each hook swings in at random, " + 
		"but their movements are so slow that it is almost impossible to see. You figure it’s due to your footsteps, so you stop one from swinging by clutching it in your fist, " + 
		"then letting go, but within seconds it starts to swing once more. " + 
		"\n\nPress [R] to return to the Palace.";
		if (Input.GetKeyDown(KeyCode.R) && floorplan_check == true) 			{myState = States.palace_1;} 
		else if (Input.GetKeyDown(KeyCode.R) && floorplan_check == false)		{myState = States.palace_0;}
	}
	
	void bathroom () {
		//Check the bathroom
		text.text = "The bathrooms are in much the same state as the rest of the place. Someone has methodically smashed each porcelain commode with coconuts and other implements. " + 
		"There is about a half inch of rancid, stinking stagnant water on the floor, so you don’t want to stay there very long. What's odd is that the toilets and the sinks all drip, " + 
		"leak, or just run freely. They should have shut the water off long ago, shouldn’t they?" + 
		"\n\nPress [R] to return to the Palace.";
		if (Input.GetKeyDown(KeyCode.R) && floorplan_check == true) 			{myState = States.palace_1;} 
		else if (Input.GetKeyDown(KeyCode.R) && floorplan_check == false)		{myState = States.palace_0;}
	}
	
	void rooms () {
		//Check the rooms
		text.text = "There are plenty of rooms in the resort, but you don’t think you have enough time to look through them all. " + 
		"The few you do peer into are similarly wrecked and you don’t expect to find anything there. As you explore though you think there is a television or radio in one room, " + 
		"as you think you hear a quiet conversation. The only phrases you can make out are, 'I didn't believe it', 'I didn't know that' and 'Your father told you'. " + 
		"You run out into the corridor and look back where you came from and forward to a set of external stairs beyond another empty doorway. " + 
		"\n\nPress [R] to run to the Palace or [S] to run to the stairs.";
		if (Input.GetKeyDown(KeyCode.R) && floorplan_check == true) 			{myState = States.palace_1;} 
		else if (Input.GetKeyDown(KeyCode.R) && floorplan_check == false)		{myState = States.palace_0;}
		else if (Input.GetKeyDown(KeyCode.S))									{myState = States.stairs;}
	}
	
	void stairs () {
		//External Stairs
		text.text = "Looking over the rail you can see another courtyard below that was previously covered by a class roof that has since been smashed. " + 
		"You nervously look behind you and confirm you are not being followed by the source of the voices you heard previously. " + 
		"\n\nPress [D] to descend the stairs to the courtyard or [B] to go back to the rooms.";
		if (Input.GetKeyDown(KeyCode.D)) 										{myState = States.innerCourtyard;} 
		else if (Input.GetKeyDown(KeyCode.R))									{myState = States.rooms_1;}
	}
	
	void rooms_1 () {
		//Return to the rooms from the stairs
		text.text = "The voices you heard previously are now silent. You peek into each room in turn, but you are unable to locate the source of the voices. " + 
		"Maybe you mind was playing tricks on you?" +
		"\n\nPress [R] to return to the Palace or [S] to return to the stairs.";
		if (Input.GetKeyDown(KeyCode.R) && floorplan_check == true) 			{myState = States.palace_1;} 
		else if (Input.GetKeyDown(KeyCode.R) && floorplan_check == false)		{myState = States.palace_0;}
		else if (Input.GetKeyDown(KeyCode.S))									{myState = States.stairs;}
	}
	
	void innerCourtyard () {
		//Reptile House
		text.text = "You arrive in the previously covered courtyard. Shattered glass is all over the floor and cracks and crinkles underfoot as cautiously move from one side to the other. " + 
		"Exotic greenery has grown and struggles for light and heat with the local greenery. It’s early afternoon now and the sun hits the green and yellow walls and warms your skin. " + 
		"It also draws your attention to the far end of the yard where there sits a lifelike statue of a python." + 
		"\n\nPress [P] to approach the Python statue or [I] to ignore it and enter the room beyond.";
		if (Input.GetKeyDown(KeyCode.P)) 										{myState = States.python;} 
		else if (Input.GetKeyDown(KeyCode.I))									{myState = States.lounge;}
	}
	
	void python () {
		//Python Encounter
		text.text = "The python, eighty feet long, coiled up and ‘sunning’ itself on a pedestal. Light fell onto the object in the perfect way for a photograph. " + 
		"So, you approach the python and snap a photo. You stand on your toes and snap another, moving close to get the detail of its face. Slowly, the python lifts its head, " + 
		"looks directly into your eyes, and slithers off the pedestal, into the foliage. All eighty feet of it. Its head long disappearing before its tail even left the sunning spot. " + 
		"Disney had released all their animals onto the grounds. You look down at the floorplan, 'Reptile House'. " + 
		"\n\nPress [L] to move into the lounge at the far end of the court.";
		if (Input.GetKeyDown(KeyCode.L)) 										{myState = States.lounge;} 
	}
	
	void lounge () {
		//Lounge
		text.text = "You look for a place to sit down, as your legs are feeling a bit like jelly at this point. Of course, " + 
		"there is no place to sit down unless you want to recline in the broken glass and dead leaf carpet or haul yourself up onto a desk of questionable reliability. " + 
		"To the far right of the room you see some stairs and decide to have a seat there until you felt better. The stairway leads downward, below ground level. " + 
		"Using your camera flash as a sort of improvised flashlight, you can see that the staircase ended in a metal mesh door with a padlock. A sign on the door read " + 
		"'MASCOTS ONLY! THANK YOU!' " + 
		"\n\nPress [D] to break the lock and go through the door.";
		if (Input.GetKeyDown(KeyCode.D)) 										{myState = States.mascots;} 
	}
	
	void mascots () {
		//Mascots only
		text.text = "It didn't take much to bust the metal plate on the wall that the padlock was hooked to. " + 
		"Time and decay had done most of the work for you and you are able to bend the metal plate enough to pull the screws out of the wall - " + 
		"something nobody else had apparently thought of, or hadn't been able to do at the time. The area was a very welcomed change from the rest of the building you have seen. " + 
		"Nothing had been stolen or broken, but age and exposure were taking their toll. Tables had note pads and pens, there are clocks...even a punch-in clock and a small break room. " + 
		"\n\nPress [T] to look on the tables, [B] to look at the break room or [H] to continue down the hallway.";
		if (Input.GetKeyDown(KeyCode.T)) 										{myState = States.tables;} 
		else if (Input.GetKeyDown(KeyCode.B))									{myState = States.breakRoom;}
		else if (Input.GetKeyDown(KeyCode.H))									{myState = States.hallway;}
	}
	
	void tables () {
		//Tables and Notepads
		text.text = "You move closer to the tables and bend over to look at the pens and note pads. First you try a pen but the ink has long since dried up. " + 
		"Next to the pen is a pencil. You realise you can use this find out what some one last wrote on the pad. You start to rub and a message is revealed. " + 
		"‘Dave, Please lock the door when you leave tonight, it was open when I came in this morning, we can’t take the risk, not with guests here now, not after…well...you know.’ " + 
		"With a shudder you put the pencil back." + 
		"\n\nPress [R] to return to the Mascot lounge.";
		if (Input.GetKeyDown(KeyCode.R)) 										{myState = States.mascots;} 
	}
	
	void breakRoom () {
		//Break Room
		text.text = "It was like one of those post-apocalypse movies where everything is left in the state of evacuation. " + 
		"An old, static-filled television is attached to a bracket on the wall and long rotted-out food and drink sits on the counters. There is nothing else of note in the area however." + 
		"\n\nPress [R] to return to the Mascot lounge.";
		if (Input.GetKeyDown(KeyCode.R)) 										{myState = States.mascots;} 
	}
	
	void hallway () {
		//Carry on down the hallway
		text.text = "As you walk the maze-like hallways, the sights just became more interesting. Desks and tables are knocked over, " + 
		"papers almost melded with the damp floor and a large carpet of mould is slowly overtaking the rotting crimson carpet. " + 
		"Wood is disintegrated into mush and clothing items hanging on hooks simply fell to moist threads with age. The light was becoming sparser as you go further into the dank, " + 
		"suffocating depths of the place. You reach a black and yellow striped door with the words 'CHARACTER PREP 1' stencilled on it." + 
		"\n\nPress [D] to try and open the door.";
		if (Input.GetKeyDown(KeyCode.D)) 										{myState = States.charPrep;} 
	}
	
	void charPrep () {
		//Character Prep
		text.text = "The door won’t open. You figure this was probably where the costumes were kept. Yet try as I might, whatever angle or trick you try, the door will not budge. " + 
		"That is, until you give up and start to walk away. That was when there was a slight popping sound and the door creaks open slowly." + 
		"\n\nPress [D] to go through the open door.";
		if (Input.GetKeyDown(KeyCode.D)) 										{myState = States.charPrep_1;} 
	}
	
	void charPrep_1 () {
		//Character Prep 2
		text.text = "Inside, the room was completely dark. Pitch black. You use the camera flash to look for a light switch in the wall by the door, but there was nothing. " + 
		"As you make your search there is a loud electrical buzz. Rows of lights overhead suddenly flashed to life, fading in and out like the rest you passed. " + 
		"Various Disney costumes hang on the walls, fully put together like strange cartoon cadavers hung from invisible nooses. " + 
		"There was also Mickey Mouse costume at the centre of the room." + 
		"\n\nPress [C] to photograph the costumes or [M] to photograph Mickey Mouse.";
		if (Input.GetKeyDown(KeyCode.C)) 										{myState = States.costumes;}
		else if (Input.GetKeyDown(KeyCode.M))									{myState = States.mickey;} 
	}
	
	void costumes () {
		//Costumes
		text.text = "You take a picture of the costumes hanging on the walls. Side shots to show an entire row of frozen, putrid cartoon faces, some with eyes missing. " + 
		"You reach for the head of a Donald Duck costume and carefully remove it. " + 
		"As you look into the face of the wide-eyed, head there’s a loud clattering sound making you jump with fright. You look down at your feet and there between your shoes " + 
		"is a human skull. It had fell and shattered to pieces at your feet. You turn around to leave." + 
		"\n\nPress [T] to turn and RUN!";
		if (Input.GetKeyDown(KeyCode.T)) 										{myState = States.charPrep_2;}
	}
	
	void mickey () {
		//Mickey Costume
		text.text = "Unlike the other costumes, Mickey is lying on its back in the centre of the floor like a murder victim. The fur on the costume is rotten and shedding, " + 
		"creating bare patches. What was even odder, however, was the colouring of the costume. It was like a photo negative of the actual Mickey Mouse. " + 
		"Black where he should be white and white where he should be black. His normally red overalls were light blue. You snap a picture, you’ve seen enough." + 
		"\n\nPress [T] to turn and leave.";
		if (Input.GetKeyDown(KeyCode.T)) 										{myState = States.charPrep_2;}
	}
	
	void charPrep_2 () {
		//Ending
		text.text = "That's when Mickey, starts to get up, then climbs to its feet, the costume... or whoever is inside of it, stands at the centre of the room. " + 
		"Its fake face looking directly at you. ‘Hey,’ it says in a hushed, perverted, Mickey voice, 'Wanna see my head come off?' It starts to pull at its own head, its clumsy, " + 
		"gloved fingers around its neck. It works its digits into its neck... so much blood... so much thick, chunky, yellow blood. " + 
		"Hearing a sickening tearing of cloth and flesh you rush past the doorway. You see the final message clawed into the metal...'ABANDONED BY GOD' " + 
		"\n\nPress [R] to keep running!";
		if (Input.GetKeyDown(KeyCode.R)) 										{myState = States.ending;}
	}
	
	void ending () {
		//Ending Part 2
		text.text = "You never get the pictures out of the camera. You never write the blog entry about it. After you ran from that place, " + 
		"you knew why Disney didn't want anyone to know about it. They didn't want anyone like you getting in. They didn't want anything like that getting out… " + 
		"\n\nPress [Space] to play again...";
		if (Input.GetKeyDown(KeyCode.Space)) 										{myState = States.gate;}
	}
}
