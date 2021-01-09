#include<iostream> 
#include<windows.h>
#include<String.h>
#include<stdio.h>
#include <cstddef>

using namespace std;
// proyecto traductor codigo morse.
//	getline(cin, variable); //camptura un estring con spacio

void insertar(char[]);
void morse(char[]);
void menu(char[]);
void insertMorse(char[]);
void spanol(string[]);

int main(){
	char opc[1];
	char texto[140];
	char text_morse[500];
	
	menu(opc);
	
	for (int i = 0; i < opc[i]; i++){		
		while(opc[i] != '3'){			
		    switch(opc[i]){
		    	case '1':
				    insertar(texto);
				    morse(texto);	
				   
				    cout<<"\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \t ";
 			        system("pause");
 			        system("cls");
		    		break;
		    	case '2':
		    		insertMorse(text_morse);		    				    						
					
					cout<<"\n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \n \t ";
					system("pause");
 			        system("cls");
 			        break;
		    	default:
		    		cout<<"\t Dato invalido, Vuelva a intentarlo...! \n \t ";
		    		system("pause");
		    		system("cls");
		    		break;
			}
			
			menu(opc);
		}
	}
	
	return 0;
	
}

void menu(char opc[]){
	system("color 0f");
	cout<<"\t ---------------------------------------------------------- \n";
	cout<<"\t |                  Menu de traduccion                    | \n";
	cout<<"\t ---------------------------------------------------------- \n";
	cout<<"\t |              1. Traducir Espanol a Morse               | \n";
	cout<<"\t |              2. Traducir Morse a Espanol               | \n";
	cout<<"\t |              3. Salir                                  | \n";
	cout<<"\t ---------------------------------------------------------- \n";
	cout<<"\t Que quieres hacer: ";  gets(opc);
		
}

void insertar(char texto[]){	
	cout<<"\t Ingrese la oracion a traducir \n \t>";
	gets(texto);
}

void morse(char texto[]){
	system("cls");
	system("color 0a");
	cout<<"\n \n";
	cout<<"\t ---------------------------------------------------------- \n";
	cout<<"\t |                Encriptacion de Datos....               | \n";
	cout<<"\t ---------------------------------------------------------- \n";
	for(int i = 0; i < texto[i]; i++){ 
//		cout<<" > ";

		switch(texto[i]){
			case 65:  case 97:
				cout<<".- \t";   // A
				Beep(1000,150);Beep(1000,450);
				break;
				
		    case 66: case 98:
		    	cout<<"-... \t"; // B
		    	Beep(1000,450);Beep(1000,150);Beep(1000,150);Beep(1000,150);
		    	break;
		    	
		    case 67: case 99:
		    	cout<<"-.-. \t"; // C
		    	Beep(1000,450);Beep(1000,150);Beep(1000,450);Beep(1000,150);
		    	break;
		    	
		    case 68: case 100:
		    	cout<<"-.. \t"; // D
		    	Beep(1000,450);Beep(1000,150);Beep(1000,150);
		    	break;
		    
		    case 69: case 101:
		    	cout<<". \t"; // E
		    	Beep(1000,150);
		    	break;
		    	
		    case 70: case 102:
		    	cout<<"..-. \t"; // F
		    	Beep(1000,150);Beep(1000,150);Beep(1000,450);Beep(1000,150);
		    	break;
		    	
		    case 71: case 103:
		    	cout<<"--. \t"; // G
		    	Beep(1000,450);Beep(1000,450);Beep(1000,150);
		    	break;
		    	
		    case 72: case 104:
		    	cout<<".... \t"; // H
		    	Beep(1000,150);Beep(1000,150);Beep(1000,150);Beep(1000,150);
		    	break;
		    	
		    case 73: case 105:
		    	cout<<".. \t"; // I
		    	Beep(1000,150);Beep(1000,150);
		    	break;
		    	
		    case 74: case 106:
		    	cout<<".--- \t"; // J
		    	Beep(1000,150);Beep(1000,450);Beep(1000,450);Beep(1000,450);
		    	break;
		    
			case 75: case 107:
				cout<<"-.- \t"; // K
		    	Beep(1000,450);Beep(1000,150);Beep(1000,450);
		    	break;
		    	
		    case 76: case 108:
		    	cout<<".-.. \t"; // L
		    	Beep(1000,150);Beep(1000,450);Beep(1000,150);Beep(1000,150);
		    	break;
		    
		    case 77: case 109:
		    	cout<<"-- \t"; // M
		    	Beep(1000,450);Beep(1000,450);
		    	break;
		    	
		    case 78: case 110:
		    	cout<<"-. \t"; // N
		    	Beep(1000,450);Beep(1000,150);
		    	break;
		    	
//		    case 'Ñ': case 'ñ':
//		    	cout<<"--.-- \t"; // Ñ
//		    	Beep(1000,450);Beep(1000,450);Beep(1000,150);Beep(1000,450);Beep(1000,450);
//		    	break;
		    case 79: case 111:
		    	cout<<"--- \t"; // O
		    	Beep(1000,450);Beep(1000,450);Beep(1000,450);
		    	break;
		    	
		    case 80: case 112:
		    	cout<<".--. \t"; // P
		    	Beep(1000,150);Beep(1000,450);Beep(1000,450);Beep(1000,150);
		    	break;
		    	
		    case 81: case 113:
		    	cout<<"--.- \t"; // Q
		    	Beep(1000,450);Beep(1000,450);Beep(1000,150);Beep(1000,450);
		    	break;

		    case 82: case 114:
		    	cout<<".-. \t"; // R
		    	Beep(1000,150);Beep(1000,450);Beep(1000,150);
		    	break;
		    	
		    case 83: case 115:
		    	cout<<"... \t"; // S
		    	Beep(1000,150);Beep(1000,150);Beep(1000,150);
		    	break;
		    	
		    case 84: case 116:
		    	cout<<"- \t"; // T
		    	Beep(1000,450);
		    	break;
		    	
		    case 85: case 117:
		    	cout<<"..- \t"; // U
		    	Beep(1000,150);Beep(1000,150);Beep(1000,450);
		    	break;
		    
			case 86: case 118:
				cout<<"...- \t"; // V
		    	Beep(1000,150);Beep(1000,150);Beep(1000,150);Beep(1000,450);
		    	break;
		    	
		    case 87: case 119:
		    	cout<<".-- \t"; // W
		    	Beep(1000,150);Beep(1000,450);Beep(1000,450);
		    	break;
		    	
		    case 88: case 120:
		    	cout<<"-..- \t"; // X
		    	Beep(1000,450);Beep(1000,150);Beep(1000,150);Beep(1000,450);
		    	break;
		    	
		    case 89: case 121:
		    	cout<<"-.-- \t"; // Y
		    	Beep(1000,450);Beep(1000,150);Beep(1000,450);Beep(1000,450);
		    	break;
		    	
		    case 90: case 122:
		    	cout<<"--.. \t"; // Z
		    	Beep(1000,450);Beep(1000,450);Beep(1000,150);Beep(1000,150);
		    	break;
		    	
			default:
				cout<<"/ \t"; // SPACE
				Beep(1000,0);
				break;
		}
	}
}

void insertMorse(char text_morse[]){	
	system("cls");
	system("color 0a");
	cout<<"\t ----------------------------------------------------------- \n";
	cout<<"\t |                    Alfabeto Morse                       | \n";
	cout<<"\t ----------------------------------------------------------- \n";
	cout<<"\t |  A> .-   B> -... C> -.-. D> -..  E> .    F> ..-. G> --. | \n";
	cout<<"\t |  H> .... I> ..   J> .--- K> -.-  L> .-.. M> --   N> -.  | \n";
	cout<<"\t |  O> ---  P> .--. Q> --.- R> .-.  S> ...  T> -    U> ..- | \n";
	cout<<"\t |  V> ...- W> .--  X> -..- Y> -.-- Z> --.. SPACE> /       | \n";
	cout<<"\t ----------------------------------------------------------- \n";
	cout<<"\t Ingrese clave morse \n \t>"; cin.getline(text_morse, 500);
	
	char* space;
	string carcter_morse[140];
	
	space = strtok(text_morse, " ");
	int j = 0;
	
	while(space != NULL){		
		if(j < 140){
		  carcter_morse[j] = space;		
		}
		
		j = j + 1;		
		space = strtok(NULL, " "); 
	} 

	spanol(carcter_morse);
}

void spanol(string carcter_morse[]){
	system("color 0f");
	system("cls");
	cout<<"\n \n";
	cout<<"\t ---------------------------------------------------------- \n";
	cout<<"\t |               Desencriptacion de Datos....             | \n ";
	cout<<"\t ---------------------------------------------------------- \n";
	cout<<"\t>";
	
	for(int i = 0; i < 140; i++){
		
		if (carcter_morse[i].compare(".-") == 0){
			Beep(1000,150);Beep(1000,450); // A
			cout<<"a";
			
	    }// A
		
		if (carcter_morse[i].compare("-...") == 0){
			Beep(1000,450);Beep(1000,150);Beep(1000,150);Beep(1000,150); // B
			cout<<"b";
			
	    }//B
	    
	    if (carcter_morse[i].compare("-.-.") == 0){
			Beep(1000,450);Beep(1000,150);Beep(1000,450);Beep(1000,150); // C
			cout<<"c";
	    }//C
	    
	    if (carcter_morse[i].compare("-..") == 0){
			Beep(1000,450);Beep(1000,150);Beep(1000,150); // D
			cout<<"d";
	    }//D
	    
	    if (carcter_morse[i].compare(".") == 0){
			Beep(1000,150); // E
			cout<<"e";
	    }//E
	    
	    if (carcter_morse[i].compare("..-.") == 0){
			Beep(1000,150);Beep(1000,150);Beep(1000,450);Beep(1000,150); // F
			cout<<"f";
	    }//F
	    
	    if (carcter_morse[i].compare("--.") == 0){
			Beep(1000,450);Beep(1000,450);Beep(1000,150); // G
			cout<<"g";
	    }//G
	    
	    if (carcter_morse[i].compare("....") == 0){
			Beep(1000,150);Beep(1000,150);Beep(1000,150);Beep(1000,150); // H
			cout<<"h";
	    }//H
	    
	    if (carcter_morse[i].compare("..") == 0){
			Beep(1000,150);Beep(1000,150); // I
			cout<<"i";
	    }//I
	    
	    if (carcter_morse[i].compare(".---") == 0){
			Beep(1000,150);Beep(1000,450);Beep(1000,450);Beep(1000,450); // J
			cout<<"j";
	    }//J
	    
	    if (carcter_morse[i].compare("-.-") == 0){
			Beep(1000,450);Beep(1000,150);Beep(1000,450); // K
			cout<<"k";
	    }//K
	    
	    if (carcter_morse[i].compare(".-..") == 0){
			Beep(1000,150);Beep(1000,450);Beep(1000,150);Beep(1000,150); // L
			cout<<"l";
	    }//L
	    
	    if (carcter_morse[i].compare("--") == 0){
			Beep(1000,450);Beep(1000,450); // M
			cout<<"m";
	    }//M
	    
	    if (carcter_morse[i].compare("-.") == 0){
			Beep(1000,450);Beep(1000,150); // N
			cout<<"n";
	    }//N
	    
//	    if (carcter_morse[i].compare("--.--") == 0){
//      	    Beep(1000,450);Beep(1000,450);Beep(1000,150);Beep(1000,450);Beep(1000,450); // Ñ			
//			cout<<"ñ";
//	    }//Ñ
	    
	    if (carcter_morse[i].compare("---") == 0){
			Beep(1000,450);Beep(1000,450);Beep(1000,450); // O
			cout<<"o";
	    }//O
	    
	    if (carcter_morse[i].compare(".--.") == 0){
			Beep(1000,150);Beep(1000,450);Beep(1000,450);Beep(1000,150); // P
			cout<<"p";
	    }//P
	    
	    if (carcter_morse[i].compare("--.-") == 0){
			Beep(1000,450);Beep(1000,450);Beep(1000,150);Beep(1000,450); // Q
			cout<<"q";
	    }//Q
	    
	    if (carcter_morse[i].compare(".-.") == 0){
			Beep(1000,150);Beep(1000,450);Beep(1000,150); // R
			cout<<"r";
	    }//R
	    
	    if (carcter_morse[i].compare("...") == 0){
			Beep(1000,150);Beep(1000,150);Beep(1000,150); // S
			cout<<"s";
	    }//S
	    
	    if (carcter_morse[i].compare("-") == 0){
			Beep(1000,450); // T
			cout<<"t";
	    }//T
	    
	    if (carcter_morse[i].compare("..-") == 0){
			Beep(1000,150);Beep(1000,150);Beep(1000,450); // U
			cout<<"u";
	    }//U
	    
	    if (carcter_morse[i].compare("...-") == 0){
			Beep(1000,150);Beep(1000,150);Beep(1000,150);Beep(1000,450); // V
			cout<<"v";
	    }//V
	    
	    if (carcter_morse[i].compare(".--") == 0){
			Beep(1000,150);Beep(1000,450);Beep(1000,450); // W
			cout<<"w";
	    }//W
	    
	    if (carcter_morse[i].compare("-..-") == 0){
			Beep(1000,450);Beep(1000,150);Beep(1000,150);Beep(1000,450); // X
			cout<<"x";
	    }//X
	    
	    if (carcter_morse[i].compare("-.--") == 0){
			Beep(1000,450);Beep(1000,150);Beep(1000,450);Beep(1000,450); // Y
			cout<<"y";
	    }//Y
	    
	    if (carcter_morse[i].compare("--..") == 0){
			Beep(1000,450);Beep(1000,450);Beep(1000,150);Beep(1000,150); // Z
			cout<<"z";
	    }//Z
	    
	    if (carcter_morse[i].compare("/") == 0){
			Beep(1000,0); // SPACE
			cout<<" ";
	    }//SPACE
	}
}

