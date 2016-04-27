# Calvert_CSCI2270_FinalProject
Final project for CSCI 2270.

Name: Lucas Calvert
Partners: None

Description:
	My project is to extend the functionality of Assignment 4 from
earlier this semester. I will implement 4-5 new methods in the
CommunicationNetwork class and update some of the previous methods.


How to Run:
	Running this program is simple, and exactly the same as running the original
assignment 4. Just compile and run the program (no command-line arguments). The menu
is also similar to the one from assignment 4. Type in the number of the option you 
want to select and press enter (then follow the on-screen instructions).
	When building a new network from a file, remember to include the .txt at the
end of the filename. I have included a simple example file labeled newNetwork.txt, but
any file that is in the same format should work.


Dependencies:
	No extra libraries need to be downloaded.

System Requirements:
	I have written the program on the CU Linux virtual machine, but it should
work with other operating systems.


Group Members:
	Lucas Calvert (me)


Contributors:
	None yet


Open Issues/Bugs:
	There are several issues that I am currently aware of with this program:
		-A segmentation fault occurs at the last element when clearing the
		network
		-Need to add cases in the Add/Delete city methods for when the input
		city is not found
		-A segmentation fault occurs in the find distance between 2 cities
		method when either city is not found, or the city entered as the starting
		city is after the ending city
	It would also be good to add the add/delete/findDistance/... functionality
	to the second network (should be easy to do)




