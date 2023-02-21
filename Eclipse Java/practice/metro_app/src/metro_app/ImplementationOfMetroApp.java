package metro_app;
import java.io.*;
import java.util.*;
public class ImplementationOfMetroApp {

	public static void main(String[] args) throws IOException{
		Graph g = new Graph();
		g.Create_Metro_Map(g);
		System.out.println("\n\t\t\t****Welcome Aboard To The Metro App*****");
		BufferedReader inp = new BufferedReader(new InputStreamReader(System.in));
		while(true)
		{
			System.out.println("\t\t\t\t~~LIST OF ACTIONS~~\n\n");
			System.out.println("1. LIST ALL THE STATIONS IN THE MAP");
			System.out.println("2. SHOW THE METRO MAP");
			System.out.println("3. GET SHORTEST DISTANCE FROM A 'SOURCE' STATION TO 'DESTINATION' STATION");
			System.out.println("4. GET SHORTEST TIME TO REACH FROM A 'SOURCE' STATION TO 'DESTINATION' STATION");
			System.out.println("5. GET SHORTEST PATH (DISTANCE WISE) TO REACH FROM A 'SOURCE' STATION TO 'DESTINATION' STATION");
			System.out.println("6. GET SHORTEST PATH (TIME WISE) TO REACH FROM A 'SOURCE' STATION TO 'DESTINATION' STATION");
			System.out.println("7. EXIT THE MENU");
			System.out.print("\nENTER YOUR CHOICE FROM THE ABOVE LIST (1 to 7) : ");
			int choice = -1;
			try {
				choice = Integer.parseInt(inp.readLine());
			} catch(Exception e) {
				// default will handle
			}
			System.out.print("\n***********************************************************\n");
			if(choice == 7)
			{
				System.exit(0);
			}
			switch(choice)
			{
			case 1:
				g.display_Stations();
				break;
		
			case 2:
				g.display_Map();
				break;
			
			case 3:
				g.distancewiseshortestdistance();;
				break;
			
			case 4:
				String codes[] = g.printCodelist();
				System.out.print("ENTER THE SOURCE STATION: ");
				String sat1 = inp.readLine();
				System.out.print("ENTER THE DESTINATION STATION: ");
				String sat2 = inp.readLine();
			
				HashMap<String, Boolean> processed1= new HashMap<>();				
				System.out.println("SHORTEST TIME FROM ("+sat1+") TO ("+sat2+") IS "+g.dijkstra(sat1, sat2, true)/60+" MINUTES\n\n");
				break;
			
			case 5:
				String codes1[] = g.printCodelist();
				System.out.println("ENTER THE SOURCE AND DESTINATION STATIONS");
				String s1 = inp.readLine();
				String s2 = inp.readLine();
			
				HashMap<String, Boolean> processed2 = new HashMap<>();
				if(!g.containsVertex(s1) || !g.containsVertex(s2) || !g.hasPath(s1, s2, processed2))
					System.out.println("THE INPUTS ARE INVALID."+
				                       "THE SOURCE AND/OR DESTINATION STATION SHOULD BE IN THEIR NAME.");
				else 
				{
					ArrayList<String> str = g.get_Interchanges(g.Get_Minimum_Distance(s1, s2));
					int len = str.size();
					System.out.println("SOURCE STATION : " + s1);
					System.out.println("DESTINATION STATION : " + s2);
					System.out.println("DISTANCE : " + str.get(len-1));
					System.out.println("NUMBER OF INTERCHANGES : " + str.get(len-2));
					System.out.println("~~~~~~~~~~~~~");
					System.out.println("START  ==>  " + str.get(0));
					for(int i=1; i<len-3; i++)
					{
						System.out.println(str.get(i));
					}
					System.out.print(str.get(len-3) + "   ==>    END");
					System.out.println("\n~~~~~~~~~~~~~");
				}
				break;
			
			case 6:
				String codes2[] = g.printCodelist();
				System.out.print("ENTER THE SOURCE STATION: ");
				String ss1 = inp.readLine();
				System.out.print("ENTER THE DESTINATION STATION: ");
				String ss2 = inp.readLine();
			
				HashMap<String, Boolean> processed3 = new HashMap<>();
				if(!g.containsVertex(ss1) || !g.containsVertex(ss2) || !g.hasPath(ss1, ss2, processed3))
					System.out.println("THE INPUTS ARE INVALID" + 
				                       "THE SOURCE AND/OR DESTINATION STATION SHOULD BE IN THEIR NAME");
				else
				{
					ArrayList<String> str = g.get_Interchanges(g.Get_Minimum_Time(ss1, ss2));
					int len = str.size();
					System.out.println("SOURCE STATION : " + ss1);
					System.out.println("DESTINATION STATION : " + ss2);
					System.out.println("TIME : " + str.get(len-1)+" MINUTES");
					System.out.println("NUMBER OF INTERCHANGES : " + str.get(len-2));
					System.out.println("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
					System.out.print("START  ==>  " + str.get(0) + " ==>  ");
					for(int i=1; i<len-3; i++)
					{
						System.out.println(str.get(i));
					}
					System.out.print(str.get(len-3) + "   ==>    END");
					System.out.println("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
				}
				break;	
			case 7:
				System.out.println("Thank You For Visiting Metro App. Hope You Have A Safe And Fun Journey");
				break;
           	 default:
                System.out.println("Please enter a valid option! ");
                System.out.println("The options you can choose are from 1 to 6. ");
			}
		}

}
}
