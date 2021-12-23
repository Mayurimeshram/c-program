#include<stdio.h>
 enum Months{jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec};
 
 int main()
 
 {
 	 enum Months m;
 	 m=aug;
 	 switch(m)
 	 {
 	 	case jan:
 	 		printf(" month is jan\n");
 	 		break;
 	 		case feb:
 	 			printf(" month is feb\n");
 	 			break;
 	 			case mar:
 	 			printf(" month is mar\n");
 	 			break;
 	 			case apr:
 	 			printf(" month is apr\n");
                break;
                case may:
                	printf(" month is may\n");
                	break;
                	case jun:
                		printf(" month is junn");
                		break;
                		case jul:
                			printf(" month is jul\n");
                			break;
                			case aug:
                				printf(" month is aug\n");
                				break;
                				case sep:
                					printf(" month is sep");
                					break;
                					case oct:
                						printf(" month is oct\n");
                						break;
                						case nov:
                							printf(" month is nov\n");
                							break;
                							
                							case dec:
                							printf(" month is dec\n");
                							break;
                						}
	  }
 
