#include <stdio.h>
int main() {

	int number;
	printf(" **OSI Seven Layer Model**\n");
	
	printf("\n 7 - Applivation Layer \n 6 - Presentation Layer \n 5 - Session Layer \n");
	printf(" 4 - Transport Layer \n 3 - Network Layer \n 2 - Data Link Layer \n 1 - Physical Layer \n");
	
	printf("\n **Enter a number :");
	scanf("%d",&number);
	 
	switch(number){
		case 7:
			printf(" Application Layer:\n Human-computer interaction layer, where applications can access the network services.\n\n");
			break;
		case 6:
		    printf(" Presentation Layer:\n Ensures that data is in a usable format and is where data encryption occurs.\n\n");
		    break;
		case 5:
		    printf(" Session Layer:\n Maintains connections and is responsible for controlling prts and sessions.\n\n");
		    break;
		case 4:
		    printf(" Transport Layer:\n Transmits data using transmission protocols including TCP and UDP.\n\n");
		    break;
		case 3:
		    printf(" Network Layer:\n Decides which physical path the data will take.\n\n");
		    break;
		case 2:
		    printf(" Data Link Layer:\n Defines the format of data on the network.\n\n");
		    break;
		case 1:
		    printf(" Physical Layer:\n Transmits raw bit stream over the physical medium.\n\n");
		    break;
	}
	
	if(number<1 || number>7)
	printf(" INVALID NUMBER ! TRY AGAIN !");
	
	return 0;

}
