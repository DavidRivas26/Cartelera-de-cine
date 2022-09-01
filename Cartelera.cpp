#include<stdio.h>
#include <iostream>
#include <stdint.h>
#include<stdlib.h>
#include <cstdlib>

using namespace std;
int main(){
    int cines1, cines2, cines3, cines4, si;
	char cines, barrio;
	
			cout<<"\t\t\t\t\t|      dBBBP     dBP     dBBBBb     dBBBP   .dBBBBP  |"<<endl;
			cout<<"\t\t\t\t\t|                           dBP             BP       |"<<endl;
			cout<<"\t\t\t\t\t|    dBP       dBP     dBP dBP    dBBP      `BBBBb   |"<<endl;
			cout<<"\t\t\t\t\t|   dBP       dBP     dBP dBP    dBP           dBP   |"<<endl;
			cout<<"\t\t\t\t\t|  dBBBBP    dBP     dBP dBP    dBBBBP    dBBBBP'    |"<<endl<<endl;
					
			cout<<"\t\t\t\t\t\t\t1=(Bronx)"<<endl;
 			cout<<"\t\t\t\t\t\t\t2=(Queens)"<<endl;
    		cout<<"\t\t\t\t\t\t\t3=(Brooklyn)"<<endl;
    		cout<<"\t\t\t\t\t\t\t4=(Manhattan)"<<endl;
    		cout<<"\t\t\t\t\t\t\t5=(Staten Island)"<<endl<<endl;

			cout<<"Que parte de New York desea: "; 
			cin>>barrio;

	switch(barrio){

	case '1':{    system("cls");
	
            cout<<"\t\t\t\t\t\t\t1=(Bronx)"<<endl<<endl;
            cout<<"\t\t\t\t\t\t1. CONCOURSE PLAZA MULTIPLEX"<<endl;
			cout<<"\t\t\t\t\t\t2. AMC BAY PLAZA CINEMA 13"<<endl;
			cout<<"\t\t\t\t\t\t3. SHOWCASE CINEMA DE LUX RIDGE HILL"<<endl;
			cout<<"\t\t\t\t\t\t4. VOLVER"<<endl<<endl;
			cout<<"Elija una opcion:";
			cin>>cines;

                     switch(cines)
        {

        	case '1': system("cls");

			cout<<"\t\t\t\t\t\t1. CONCOURSE PLAZA MULTIPLEX"<<endl;			
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 7:00p, 10:00p, 6:30p, 9:30p"<<endl;
			cout<<"Duracion: 2 hr 2 min "<<endl;
			cout<<"Genero:  Accion"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"HAPPY DEATH DAY 2U"<<endl;
			cout<<"Sinopsis: Un estudiante universitario debe morir una y otra vez para salvar a sus amigos de un asesino enmascarado psicotico.."<<endl;
			cout<<"Horarios: 6:35p, 9:05p"<<endl;
            cout<<"Duracion: 1 hr 40 min "<<endl;
			cout<<"Genero: Terror"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una comedia romántica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  6:45p, 9:15p"<<endl;
            cout<<"Duracion: 1 hr 28 min "<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

			cout<<"____________________________________________________________"<<endl;
			cout<<"COLD PURSUIT"<<endl;
			cout<<"Sinopsis: Un vigilante busca justicia de sangre fria contra un narcotraficante psicotico y sus secuaces sordidos."<<endl;
			cout<<"Horarios: 7:15p, 10:00p"<<endl;
            cout<<"Duracion: 1 hr 58 min "<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl;
			cout<<"Sinopsis: Emmet, Lucy, Batman y sus amigos deben defender a Bricksburg de los invasores de LEGO DUPLO desde el espacio."<<endl;
			cout<<"Horarios: 7:05p, 7:35p, 9:40p, 10:10p"<<endl;
            cout<<"Duracion:  1 hr 47 min "<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"THE PRODIGY (2019)"<<endl;
			cout<<"Sinopsis: El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 7:15p, 9:45p"<<endl;
            cout<<"Duracion: 1 hr 32 min "<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 9:00p"<<endl;
            cout<<"Duracion: 1 hr 57 min "<<endl;
			cout<<"Genero: Romance"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"QUE LEON"<<endl;
			cout<<"Sinopsis: Nicole y Jose Miguel tienen una cosa en comun: su apellido Leon. Pero provienen de diferentes entornos sociales, y su amor tendra que lidiar con la oposicion de sus padres y con un gran numero de situaciones que lo pondran a prueba."<<endl;
			cout<<"Horarios: 7:45p, 10:15p"<<endl;
            cout<<"Duracion: 1 hr 33 min "<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

			cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}
			break;

			case '2': system("cls");

			cout<<"\t\t\t\t\t\t2. AMC BAY PLAZA CINEMA 13"<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"GUNDAM NT"<<endl;
			cout<<"Sinopsis: Fathom Events y Sunrise Inc. se han unido para llevar el Mobile Suit Gundam Narrative a la pantalla grande por solo una noche. Mobile Suit Gundam NT (narrativa) es un nuevo trabajo en la saga Universal Century y describe lo que hay mas alla de Gundam UC."<<endl;
			cout<<"Horarios: 7:00p"<<endl;
            cout<<"Duracion: 1 hr 30 min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detras de su misterioso pasado."<<endl;
			cout<<"Horarios: 10:00a, 10:30a, 1:00p, 1:30p, 3:30p, 4:30p, 6:35p, 7:30p, 9:45p, 10:30p"<<endl;
            cout<<"Duracion: 2 hr 2 min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"HAPPY DEATH DAY 2U"<<endl;
			cout<<"Sinopsis: Un estudiante universitario debe morir una y otra vez para salvar a sus amigos de un asesino enmascarado psicotico.."<<endl;
			cout<<"Horarios: 2:30p, 5:15p, 7:30p, 8:00p, 9:30p, 10:45p"<<endl;
            cout<<"Duracion: 1 hr 40 min "<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una comedia romantica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  11:1a, 1:45p, 4:15p, 6:45p, 9:15p"<<endl;
            cout<<"Duracion: 1 hr 38 min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"COLD PURSUIT"<<endl;
			cout<<"Sinopsis: Un vigilante busca justicia de sangre fria contra un narcotraficante psicotico y sus secuaces sordidos."<<endl;
			cout<<"Horarios: 10:45a, 1:45p, 4:45p, 7:45p, 10:45p"<<endl;
            cout<<"Duracion: 2 hr 08 min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl;
			cout<<"Sinopsis: Emmet, Lucy, Batman y sus amigos deben defender a Bricksburg de los invasores de LEGO DUPLO desde el espacio."<<endl;
			cout<<"Horarios: 10:00a, 11:00a, 12:45p, 1:45p, 4:00p, 4:45p, 6:45p, 7:30p, 10:15p"<<endl;
            cout<<"Duracion: 1 hr 09 min"<<endl;
			cout<<"Genero: Animada"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"THE PRODIGY (2019)"<<endl;
			cout<<"Sinopsis: El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 11:30a, 2:00p, 4:30p, 7:00p, 10:00p"<<endl;
            cout<<"Duracion: 1 hr 32 min "<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 10:15a, 11:15a, 1:15p, 2:15p, 4:15p, 5:15p, 7:15p, 8:15p, 10:15p, 10:45p"<<endl;
            cout<<"Duracion: 1 hr 57 min "<<endl;
			cout<<"Genero: Romance"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"MISS BALA (2019)"<<endl;
			cout<<"Sinopsis: Una joven debe burlar a un despiadado cartel de la droga para salvar a su amiga secuestrada en Mexico."<<endl;
			cout<<"Horarios: 10:45a"<<endl;
            cout<<"Duracion: 1 hr 44 min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"QUE LEON"<<endl;
			cout<<"Sinopsis: Nicole y Jose Miguel tienen una cosa en comun: su apellido León. Pero provienen de diferentes entornos sociales, y su amor tendrá que lidiar con la oposicion de sus padres y con un gran numero de situaciones que lo pondran a prueba."<<endl;
			cout<<"Horarios: 11:00a, 4:30p, 10:30p"<<endl;
            cout<<"Duracion: 1 hr 30 min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"GLASS (2019)"<<endl;
			cout<<"Sinopsis: El guardia de seguridad David Dunn usa sus habilidades sobrenaturales para rastrear a Kevin Wendell Crumb, un hombre perturbado que tiene veinticuatro personalidades"<<endl;
			cout<<"Horarios: 3:45p, 9:30p"<<endl;
            cout<<"Duracion: 2 hr 15 min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ESCAPE ROOM (2019)"<<endl;
			cout<<"Sinopsis: Seis extraños se encuentran en circunstancias fuera de su control, y deben usar su ingenio para sobrevivir."<<endl;
			cout<<"Horarios: 4:30p"<<endl;
            cout<<"Duracion 1 hr 45 min:"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"BUMBLEBEE"<<endl;
			cout<<"Sinopsis: A la carrera en el año 1987, Bumblebee the Autobot encuentra refugio en un deposito de chatarra en una pequeña ciudad costera de California. Cuando Charlie, de 17 años, lo revive, rapidamente se entera de que no es un Volkswagen amarillo comun."<<endl;
			cout<<"Horarios: 1:30p, 7:15p"<<endl;
            cout<<"Duracion: 2hr 00 min"<<endl;
			cout<<"Genero:  Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"SPIDER-MAN: INTO THE SPIDER-VERSE"<<endl;
			cout<<"Sinopsis: Spider-Man es el mentor de un adolescente de Brooklyn, Nueva York, para convertirse en el proximo superheroe."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
            cout<<"Duracion: 1 hr 30 min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"RALPH BREAKS THE INTERNET"<<endl;
			cout<<"Sinopsis: Ralph y Vanellope se embarcan en una aventura dentro de Internet para encontrar una pieza de repuesto para un juego."<<endl;
			cout<<"Horarios: 10:00a, 1:00p"<<endl;
            cout<<"Duracion: 1 hr 48 min"<<endl;
			cout<<"Genero: Animada"<<endl<<endl;
			
			cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}

			break;

			case '3': system("cls");

			cout<<"\t\t\t\t\t\t3. SHOWCASE CINEMA DE LUX RIDGE HILL\n\n"<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 7:00, 10:00p"<<endl;
            cout<<"Duracion: 2 hr 2 min "<<endl;
			cout<<"Genero: Accion"<<endl<<endl;

			cout<<"____________________________________________________________"<<endl;
			cout<<"HAPPY DEATH DAY 2U"<<endl;
			cout<<"Sinopsis: Un estudiante universitario debe morir una y otra vez para salvar a sus amigos de un asesino enmascarado psicotico.."<<endl;
			cout<<"Horarios: 6:35p, 7:10p, 9:05p, 9:50p"<<endl;
            cout<<"Duracion: 1 hr 40 min "<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una comedia romántica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios: 6:45p, 9:15p"<<endl;
            cout<<"Duracion: "<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;
			
			cout<<"____________________________________________________________"<<endl;
			cout<<"COLD PURSUIT"<<endl;
			cout<<"Sinopsis: Un vigilante busca justicia de sangre fria contra un narcotraficante psicotico y sus secuaces sordidos."<<endl;
			cout<<"Horarios: 6:25a, 9:25p"<<endl;
            cout<<"Duracion: 1 hr 32 min "<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
			cout<<"____________________________________________________________"<<endl;
			cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl;
			cout<<"Sinopsis: Emmet, Lucy, Batman y sus amigos deben defender a Bricksburg de los invasores de LEGO DUPLO desde el espacio."<<endl;
			cout<<"Horarios: 7:05p, 7:35p, 9:05p, 9:50p"<<endl;
            cout<<"Duracion: 1 hr 30 min"<<endl;
			cout<<"Genero: Animada"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"THE PRODIGY (2019)"<<endl;
			cout<<"Sinopsis: El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 7:20p, 10:05p"<<endl;
            cout<<"Duracion: 1 hr 32 min "<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
			cout<<"____________________________________________________________"<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 6:10p, 7:15p, 9:00p"<<endl;
            cout<<"Duracion: 1 hr 57 min "<<endl;
			cout<<"Genero: Romance"<<endl<<endl;
			
			cout<<"____________________________________________________________"<<endl;
			cout<<"GLASS (2019)"<<endl;
			cout<<"Sinopsis: El guardia de seguridad David Dunn usa sus habilidades sobrenaturales para rastrear a Kevin Wendell Crumb, un hombre perturbado que tiene veinticuatro personalidades"<<endl;
			cout<<"Horarios: 9:55p"<<endl;
            cout<<"Duracion: 2 hr 9 min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;
			
			cout<<"____________________________________________________________"<<endl;
			cout<<"THE UPSIDE "<<endl;
			cout<<"Sinopsis: Un rico tetrapléjico desarrolla una amistad improbable con el parolee que se convierte en su cuidador."<<endl;
			cout<<"Horarios: 6:20p"<<endl;
            cout<<"Duracion: 2 hr 6 min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;
			
			cout<<"____________________________________________________________"<<endl;
			cout<<"AQUAMAN"<<endl;
			cout<<"Sinopsis: Arthur debe recuperar el legendario tridente de Atlan para salvar a su cuidad Atlantis."<<endl;
			cout<<"Horarios: 9:10p"<<endl;
            cout<<"Duracion: 2hr 22min"<<endl;
			cout<<"Genero: Fantasia"<<endl<<endl;
			
			cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}

			break;
     		}
			
			case 4: 	
			
			system("cls");
			return main();
			
			default:{
				
				system("cls");
				return main();
				
				break;
			}
			
			break;
			}


	case '2':{    system("cls");

            cout<<"\t\t\t\t\t\t\t2=(Queens)"<<endl<<endl;
            cout<<"\t\t\t\t\t\t1. COLLEGE POINT MULTIPLEX CINEMAS"<<endl;
			cout<<"\t\t\t\t\t\t2. AMC LOEWS BAY TERRACE 6"<<endl;
			cout<<"\t\t\t\t\t\t3. AMC LOEWS FRESH MEADOWS 7"<<endl;
			cout<<"\t\t\t\t\t\t4. BOW TIE CINEMAS SQUIRE CINEMAS"<<endl;
			cout<<"\t\t\t\t\t\t5. UA MIDWAY STADIUM 9"<<endl;
			cout<<"\t\t\t\t\t\t6. KEW GARDENS CINEMAS"<<endl;
			cout<<"\t\t\t\t\t\t7. BOMBAY THEATRE"<<endl;
			cout<<"\t\t\t\t\t\t8. MAIN STREET CINEMAS"<<endl;
			cout<<"\t\t\t\t\t\t9. CINEMART CINEMAS"<<endl;
			cout<<"\t\t\t\t\t\t10. VOLVER"<<endl<<endl;
            cout<<"Elija una opcion:";
			cin>>cines1;


                        switch(cines1){

		case 1:{ system("cls");

            cout<<"\t\t\t\t\t\t1. COLLEGE POINT MULTIPLEX CINEMAS"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 10:00p, 09:30p"<<endl;
            cout<<"Duracion: 1 hr 32 min "<<endl;
			cout<<"Genero: Accion"<<endl<<endl;

			cout<<"____________________________________________________________"<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una comedia romantica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  09:15p"<<endl;
            cout<<"Duracion: 1 hr 30 min "<<endl;
			cout<<"Genero: Romance"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"COLD PURSUIT"<<endl;
			cout<<"Sinopsis: Un vigilante busca justicia de sangre fria contra un narcotraficante psicotico y sus secuaces sordidos."<<endl;
			cout<<"Horarios: 9:35p"<<endl;
            cout<<"Duracion: 1 hr 32 min "<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"THE PRODIGY (2019)"<<endl;
			cout<<"Sinopsis: El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 9:45p"<<endl;
            cout<<"Duracion: 2 hr 2 min "<<endl;
			cout<<"Genero: Terror"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"THE WANDERING EARTH"<<endl;
			cout<<"Sinopsis: El sol está a punto de ser condenado. Los humanos deciden pelear en lugar de esperar su día del juicio final. Construyen diez mil motores planetarios que pueden conducir a toda la Tierra a escapar del sistema solar, con la esperanza de encontrar un nuevo hogar."<<endl;
			cout<<"Horarios: 9:20p, 10:15p"<<endl;
            cout<<"Duracion: 1 hr 58 min"<<endl;
			cout<<"Genero: Fantasia"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 10:10p"<<endl;
            cout<<"Duracion: 1hr 27min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"QUE LEON"<<endl;
			cout<<"Sinopsis: Nicole y José Miguel tienen una cosa en común: su apellido León. Pero provienen de diferentes entornos sociales, y su amor tendrá que lidiar con la oposición de sus padres y con un gran número de situaciones que lo pondrán a prueba."<<endl;
			cout<<"Horarios: 9:55p"<<endl;
            cout<<"Duracion: 1hr 56min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"GLASS (2019)"<<endl;
			cout<<"Sinopsis: El guardia de seguridad David Dunn usa sus habilidades sobrenaturales para rastrear a Kevin Wendell Crumb, un hombre perturbado que tiene veinticuatro personalidades"<<endl;
			cout<<"Horarios: 10:20p"<<endl;
            cout<<"Duracion: 2hr 6min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;

			cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}

			break;
		}

		case 2:{ system("cls");

            cout<<"\t\t\t\t\t\t2. AMC LOEWS BAY TERRACE 6"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 1:00p, 4:00p, 7:00p, 10:00p"<<endl;
            cout<<"Duracion: 1hr 40min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una comedia romantica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  12:30p, 2:45p, 5:00p, 7:30p, 9:45p"<<endl;
            cout<<"Duracion: 1hr 32min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"THE PRODIGY (2019)"<<endl;
			cout<<"Sinopsis: El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 12:45p, 3:30p, 6:00p, 8:20p, 10:45p"<<endl;
            cout<<"Duracion: 1hr 30min"<<endl;;
			cout<<"Genero: Terror"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"GLASS (2019)"<<endl;
			cout<<"Sinopsis: El guardia de seguridad David Dunn usa sus habilidades sobrenaturales para rastrear a Kevin Wendell Crumb, un hombre perturbado que tiene veinticuatro personalidades"<<endl;
			cout<<"Horarios: 4:15p, 7:15p, 10:15p"<<endl;
            cout<<"Duracion: 1hr 51min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl;
			cout<<"Sinopsis: Emmet, Lucy, Batman y sus amigos deben defender a Bricksburg de los invasores de LEGO DUPLO desde el espacio."<<endl;
			cout<<"Horarios: 1:45p, 4:30p, 6:45p, 9:15p"<<endl;
            cout<<"Duracion: 1hr 45min"<<endl;
			cout<<"Genero: Animacion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"MISS BALA (2019)"<<endl;
			cout<<"Sinopsis: Una joven debe burlar a un despiadado cartel de la droga para salvar a su amiga secuestrada en Mexico."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
            cout<<"Duracion: 1hr 53min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"THE UPSIDE "<<endl;
			cout<<"Sinopsis: Un rico tetraplejico desarrolla una amistad improbable con el parolee que se convierte en su cuidador."<<endl;
			cout<<"Horarios: 1:15p"<<endl;
            cout<<"Duracion: 1hr 34min"<<endl;
			cout<<"Genero: Romance"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"EXTREME JOB"<<endl;
			cout<<"Sinopsis: Un equipo de detectives de narcóticos va encubierto en un pollo frito para vigilar a una pandilla del crimen organizado, pero la receta de pollo de los detectives de repente transforma el restaurante en el restaurante más popular de la ciudad."<<endl;
			cout<<"Horarios: 4:00p, 7:30p, 10:30p"<<endl;
            cout<<"Duracion: 1hr 32min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;

			cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}

			break;
		}

		case 3:{ system("cls");

            cout<<"\t\t\t\t\t\t3. AMC LOEWS FRESH MEADOWS 7"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 8:40a, 9:30a, 12:20p, 3:15p, 6:15p, 9:10p, 12:00a"<<endl;
            cout<<"Duracion: 1hr 45min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"HAPPY DEATH DAY 2U"<<endl;
			cout<<"Sinopsis: Un estudiante universitario debe morir una y otra vez para salvar a sus amigos de un asesino enmascarado psicótico.."<<endl;
			cout<<"Horarios: 9:15a, 11:10a, 1:35p, 4:05p, 6:30p, 9:00p, 11:30p, 12:00a"<<endl;
            cout<<"Duracion: 1hr 40min"<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"COLD PURSUIT"<<endl;
			cout<<"Sinopsis: Un vigilante busca justicia de sangre fría contra un narcotraficante psicótico y sus secuaces sórdidos."<<endl;
			cout<<"Horarios: 11:45a, 2:30p, 5:15p, 8:00p, 10:45p"<<endl;
            cout<<"Duracion: 1hr 45min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl;
			cout<<"Sinopsis: Emmet, Lucy, Batman y sus amigos deben defender a Bricksburg de los invasores de LEGO DUPLO desde el espacio."<<endl;
			cout<<"Horarios: 8:30a, 9:00a, 11:30a 2:00p, 4:30p, 7:00p, 9:30p"<<endl;
            cout<<"Duracion: 1hr 22min"<<endl;
			cout<<"Genero: Animacion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"THE WANDERING EARTH"<<endl;
			cout<<"Sinopsis: El sol está a punto de ser condenado. Los humanos deciden pelear en lugar de esperar su día del juicio final. Construyen diez mil motores planetarios que pueden conducir a toda la Tierra a escapar del sistema solar, con la esperanza de encontrar un nuevo hogar."<<endl;
			cout<<"Horarios: 10:15a, 1:20p, 4:15p, 7:15p, 10:10p"<<endl;
            cout<<"Duracion: 1hr 43min"<<endl;
			cout<<"Genero: Fantasia"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 10:30a, 11:30a, 1:15p, 2:15p, 4:00p, 5:00p, 6:45p, 7:45p, 9:30p, 10:p, 12:15a"<<endl;
            cout<<"Duracion: 1hr 55min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

			cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}

			break;
		}

		case 4:{ system("cls");

           	cout<<"\t\t\t\t\t\t4. BOW TIE CINEMAS SQUIRE CINEMAS"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"GUNDAM NT"<<endl;
			cout<<"Sinopsis: Fathom Events y Sunrise Inc. se han unido para llevar el Mobile Suit Gundam Narrative a la pantalla grande por solo una noche. Mobile Suit Gundam NT (narrativa) es un nuevo trabajo en la saga Universal Century y describe lo que hay mas alla de Gundam UC."<<endl;
			cout<<"Horarios: 7:00p"<<endl;
            cout<<"Duracion: 1 hr 30 min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detras de su misterioso pasado."<<endl;
			cout<<"Horarios: 10:00a, 10:30a, 1:00p, 1:30p, 3:30p, 4:30p, 6:35p, 7:30p, 9:45p, 10:30p"<<endl;
            cout<<"Duracion: 2 hr 2 min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"HAPPY DEATH DAY 2U"<<endl;
			cout<<"Sinopsis: Un estudiante universitario debe morir una y otra vez para salvar a sus amigos de un asesino enmascarado psicotico.."<<endl;
			cout<<"Horarios: 2:30p, 5:15p, 7:30p, 8:00p, 9:30p, 10:45p"<<endl;
            cout<<"Duracion: 1 hr 40 min "<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una comedia romantica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  11:1a, 1:45p, 4:15p, 6:45p, 9:15p"<<endl;
            cout<<"Duracion: 1 hr 38 min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"COLD PURSUIT"<<endl;
			cout<<"Sinopsis: Un vigilante busca justicia de sangre fria contra un narcotraficante psicotico y sus secuaces sordidos."<<endl;
			cout<<"Horarios: 10:45a, 1:45p, 4:45p, 7:45p, 10:45p"<<endl;
            cout<<"Duracion: 2 hr 08 min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl;
			cout<<"Sinopsis: Emmet, Lucy, Batman y sus amigos deben defender a Bricksburg de los invasores de LEGO DUPLO desde el espacio."<<endl;
			cout<<"Horarios: 10:00a, 11:00a, 12:45p, 1:45p, 4:00p, 4:45p, 6:45p, 7:30p, 10:15p"<<endl;
            cout<<"Duracion: 1 hr 09 min"<<endl;
			cout<<"Genero: Animada"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"THE PRODIGY (2019)"<<endl;
			cout<<"Sinopsis: El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 11:30a, 2:00p, 4:30p, 7:00p, 10:00p"<<endl;
            cout<<"Duracion: 1 hr 32 min "<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 10:15a, 11:15a, 1:15p, 2:15p, 4:15p, 5:15p, 7:15p, 8:15p, 10:15p, 10:45p"<<endl;
            cout<<"Duracion: 1 hr 57 min "<<endl;
			cout<<"Genero: Romance"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"MISS BALA (2019)"<<endl;
			cout<<"Sinopsis: Una joven debe burlar a un despiadado cartel de la droga para salvar a su amiga secuestrada en Mexico."<<endl;
			cout<<"Horarios: 10:45a"<<endl;
            cout<<"Duracion: 1 hr 44 min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"QUE LEON"<<endl;
			cout<<"Sinopsis: Nicole y Jose Miguel tienen una cosa en comun: su apellido León. Pero provienen de diferentes entornos sociales, y su amor tendrá que lidiar con la oposicion de sus padres y con un gran numero de situaciones que lo pondran a prueba."<<endl;
			cout<<"Horarios: 11:00a, 4:30p, 10:30p"<<endl;
            cout<<"Duracion: 1 hr 30 min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"GLASS (2019)"<<endl;
			cout<<"Sinopsis: El guardia de seguridad David Dunn usa sus habilidades sobrenaturales para rastrear a Kevin Wendell Crumb, un hombre perturbado que tiene veinticuatro personalidades"<<endl;
			cout<<"Horarios: 3:45p, 9:30p"<<endl;
            cout<<"Duracion: 2 hr 15 min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ESCAPE ROOM (2019)"<<endl;
			cout<<"Sinopsis: Seis extraños se encuentran en circunstancias fuera de su control, y deben usar su ingenio para sobrevivir."<<endl;
			cout<<"Horarios: 4:30p"<<endl;
            cout<<"Duracion 1 hr 45 min:"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"BUMBLEBEE"<<endl;
			cout<<"Sinopsis: A la carrera en el año 1987, Bumblebee the Autobot encuentra refugio en un deposito de chatarra en una pequeña ciudad costera de California. Cuando Charlie, de 17 años, lo revive, rapidamente se entera de que no es un Volkswagen amarillo comun."<<endl;
			cout<<"Horarios: 1:30p, 7:15p"<<endl;
            cout<<"Duracion: 2hr 00 min"<<endl;
			cout<<"Genero:  Aciion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"SPIDER-MAN: INTO THE SPIDER-VERSE"<<endl;
			cout<<"Sinopsis: Spider-Man es el mentor de un adolescente de Brooklyn, Nueva York, para convertirse en el proximo superheroe."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
            cout<<"Duracion: 1 hr 30 min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"RALPH BREAKS THE INTERNET"<<endl;
			cout<<"Sinopsis: Ralph y Vanellope se embarcan en una aventura dentro de Internet para encontrar una pieza de repuesto para un juego."<<endl;
			cout<<"Horarios: 10:00a, 1:00p"<<endl;
            cout<<"Duracion: 1 hr 48 min"<<endl;
			cout<<"Genero: Animada"<<endl<<endl;
			
			cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}
			
			break;
			
		}

		case 5:{ system("cls");

            cout<<"\t\t\t\t\t\t5. UA MIDWAY STADIUM 9"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 7:00p, 10:00p, 6:30p, 9:30p"<<endl;
			cout<<"Duracion: 2 hr 2 min "<<endl;
			cout<<"Genero:  Accion"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"HAPPY DEATH DAY 2U"<<endl;
			cout<<"Sinopsis: Un estudiante universitario debe morir una y otra vez para salvar a sus amigos de un asesino enmascarado psicotico.."<<endl;
			cout<<"Horarios: 6:35p, 9:05p"<<endl;
            cout<<"Duracion: 1 hr 40 min "<<endl;
			cout<<"Genero: Terror"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una comedia romántica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  6:45p, 9:15p"<<endl;
            cout<<"Duracion: 1 hr 28 min "<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

			cout<<"____________________________________________________________"<<endl;
			cout<<"COLD PURSUIT"<<endl;
			cout<<"Sinopsis: Un vigilante busca justicia de sangre fria contra un narcotraficante psicotico y sus secuaces sordidos."<<endl;
			cout<<"Horarios: 7:15p, 10:00p"<<endl;
            cout<<"Duracion: 1 hr 58 min "<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl;
			cout<<"Sinopsis: Emmet, Lucy, Batman y sus amigos deben defender a Bricksburg de los invasores de LEGO DUPLO desde el espacio."<<endl;
			cout<<"Horarios: 7:05p, 7:35p, 9:40p, 10:10p"<<endl;
            cout<<"Duracion:  1 hr 47 min "<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"THE PRODIGY (2019)"<<endl;
			cout<<"Sinopsis: El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 7:15p, 9:45p"<<endl;
            cout<<"Duracion: 1 hr 32 min "<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 9:00p"<<endl;
            cout<<"Duracion: 1 hr 57 min "<<endl;
			cout<<"Genero: Romance"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"QUE LEON"<<endl;
			cout<<"Sinopsis: Nicole y Jose Miguel tienen una cosa en comun: su apellido Leon. Pero provienen de diferentes entornos sociales, y su amor tendra que lidiar con la oposicion de sus padres y con un gran numero de situaciones que lo pondran a prueba."<<endl;
			cout<<"Horarios: 7:45p, 10:15p"<<endl;
            cout<<"Duracion: 1 hr 33 min "<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

			cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}

			break;
		}

		case 6:{ system("cls");

            cout<<"\t\t\t\t\t\t6. KEW GARDENS CINEMAS"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"GUNDAM NT"<<endl;
			cout<<"Sinopsis: Fathom Events y Sunrise Inc. se han unido para llevar el Mobile Suit Gundam Narrative a la pantalla grande por solo una noche. Mobile Suit Gundam NT (narrativa) es un nuevo trabajo en la saga Universal Century y describe lo que hay mas alla de Gundam UC."<<endl;
			cout<<"Horarios: 7:00p"<<endl;
            cout<<"Duracion: 1 hr 30 min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detras de su misterioso pasado."<<endl;
			cout<<"Horarios: 10:00a, 10:30a, 1:00p, 1:30p, 3:30p, 4:30p, 6:35p, 7:30p, 9:45p, 10:30p"<<endl;
            cout<<"Duracion: 2 hr 2 min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"HAPPY DEATH DAY 2U"<<endl;
			cout<<"Sinopsis: Un estudiante universitario debe morir una y otra vez para salvar a sus amigos de un asesino enmascarado psicotico.."<<endl;
			cout<<"Horarios: 2:30p, 5:15p, 7:30p, 8:00p, 9:30p, 10:45p"<<endl;
            cout<<"Duracion: 1 hr 40 min "<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una comedia romantica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  11:1a, 1:45p, 4:15p, 6:45p, 9:15p"<<endl;
            cout<<"Duracion: 1 hr 38 min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"COLD PURSUIT"<<endl;
			cout<<"Sinopsis: Un vigilante busca justicia de sangre fria contra un narcotraficante psicotico y sus secuaces sordidos."<<endl;
			cout<<"Horarios: 10:45a, 1:45p, 4:45p, 7:45p, 10:45p"<<endl;
            cout<<"Duracion: 2 hr 08 min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl;
			cout<<"Sinopsis: Emmet, Lucy, Batman y sus amigos deben defender a Bricksburg de los invasores de LEGO DUPLO desde el espacio."<<endl;
			cout<<"Horarios: 10:00a, 11:00a, 12:45p, 1:45p, 4:00p, 4:45p, 6:45p, 7:30p, 10:15p"<<endl;
            cout<<"Duracion: 1 hr 09 min"<<endl;
			cout<<"Genero: Animada"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"THE PRODIGY (2019)"<<endl;
			cout<<"Sinopsis: El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 11:30a, 2:00p, 4:30p, 7:00p, 10:00p"<<endl;
            cout<<"Duracion: 1 hr 32 min "<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 10:15a, 11:15a, 1:15p, 2:15p, 4:15p, 5:15p, 7:15p, 8:15p, 10:15p, 10:45p"<<endl;
            cout<<"Duracion: 1 hr 57 min "<<endl;
			cout<<"Genero: Romance"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"MISS BALA (2019)"<<endl;
			cout<<"Sinopsis: Una joven debe burlar a un despiadado cartel de la droga para salvar a su amiga secuestrada en Mexico."<<endl;
			cout<<"Horarios: 10:45a"<<endl;
            cout<<"Duracion: 1 hr 44 min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"QUE LEON"<<endl;
			cout<<"Sinopsis: Nicole y Jose Miguel tienen una cosa en comun: su apellido León. Pero provienen de diferentes entornos sociales, y su amor tendrá que lidiar con la oposicion de sus padres y con un gran numero de situaciones que lo pondran a prueba."<<endl;
			cout<<"Horarios: 11:00a, 4:30p, 10:30p"<<endl;
            cout<<"Duracion: 1 hr 30 min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"GLASS (2019)"<<endl;
			cout<<"Sinopsis: El guardia de seguridad David Dunn usa sus habilidades sobrenaturales para rastrear a Kevin Wendell Crumb, un hombre perturbado que tiene veinticuatro personalidades"<<endl;
			cout<<"Horarios: 3:45p, 9:30p"<<endl;
            cout<<"Duracion: 2 hr 15 min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ESCAPE ROOM (2019)"<<endl;
			cout<<"Sinopsis: Seis extraños se encuentran en circunstancias fuera de su control, y deben usar su ingenio para sobrevivir."<<endl;
			cout<<"Horarios: 4:30p"<<endl;
            cout<<"Duracion 1 hr 45 min:"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"BUMBLEBEE"<<endl;
			cout<<"Sinopsis: A la carrera en el año 1987, Bumblebee the Autobot encuentra refugio en un deposito de chatarra en una pequeña ciudad costera de California. Cuando Charlie, de 17 años, lo revive, rapidamente se entera de que no es un Volkswagen amarillo comun."<<endl;
			cout<<"Horarios: 1:30p, 7:15p"<<endl;
            cout<<"Duracion: 2hr 00 min"<<endl;
			cout<<"Genero:  Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"SPIDER-MAN: INTO THE SPIDER-VERSE"<<endl;
			cout<<"Sinopsis: Spider-Man es el mentor de un adolescente de Brooklyn, Nueva York, para convertirse en el proximo superheroe."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
            cout<<"Duracion: 1 hr 30 min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"RALPH BREAKS THE INTERNET"<<endl;
			cout<<"Sinopsis: Ralph y Vanellope se embarcan en una aventura dentro de Internet para encontrar una pieza de repuesto para un juego."<<endl;
			cout<<"Horarios: 10:00a, 1:00p"<<endl;
            cout<<"Duracion: 1 hr 48 min"<<endl;
			cout<<"Genero: Animada"<<endl<<endl;

			cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}
			break;
		}

		case 7:{ system("cls");

            cout<<"\t\t\t\t\t\t7. BOMBAY THEATRE"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"GULLY BOY "<<endl;
			cout<<"Sinopsis: ""Gully Boy"" es una película sobre un niño de 22 años ""Murad"" de un ghetto en Mumbai, India. El hijo de un conductor, sus padres trabajaron duro para educarlo para que pudiera tener un trabajo de cuello blanco. Mientras tanto, Murad se da cuenta de su llamado a ser un rapero."<<endl;
			cout<<"Horarios: 8:00p"<<endl;
            cout<<"Duracion: 1hr 25min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;
			
			cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}
			break;
		}

		case 8:{ system("cls");

            	cout<<"\t\t\t\t\t\t8. MAIN STREET CINEMAS"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"GUNDAM NT"<<endl;
			cout<<"Sinopsis: Fathom Events y Sunrise Inc. se han unido para llevar el Mobile Suit Gundam Narrative a la pantalla grande por solo una noche. Mobile Suit Gundam NT (narrativa) es un nuevo trabajo en la saga Universal Century y describe lo que hay mas alla de Gundam UC."<<endl;
			cout<<"Horarios: 7:00p"<<endl;
            cout<<"Duracion: 1 hr 30 min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detras de su misterioso pasado."<<endl;
			cout<<"Horarios: 10:00a, 10:30a, 1:00p, 1:30p, 3:30p, 4:30p, 6:35p, 7:30p, 9:45p, 10:30p"<<endl;
            cout<<"Duracion: 2 hr 2 min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"HAPPY DEATH DAY 2U"<<endl;
			cout<<"Sinopsis: Un estudiante universitario debe morir una y otra vez para salvar a sus amigos de un asesino enmascarado psicotico.."<<endl;
			cout<<"Horarios: 2:30p, 5:15p, 7:30p, 8:00p, 9:30p, 10:45p"<<endl;
            cout<<"Duracion: 1 hr 40 min "<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una comedia romantica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  11:1a, 1:45p, 4:15p, 6:45p, 9:15p"<<endl;
            cout<<"Duracion: 1 hr 38 min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"COLD PURSUIT"<<endl;
			cout<<"Sinopsis: Un vigilante busca justicia de sangre fria contra un narcotraficante psicotico y sus secuaces sordidos."<<endl;
			cout<<"Horarios: 10:45a, 1:45p, 4:45p, 7:45p, 10:45p"<<endl;
            cout<<"Duracion: 2 hr 08 min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl;
			cout<<"Sinopsis: Emmet, Lucy, Batman y sus amigos deben defender a Bricksburg de los invasores de LEGO DUPLO desde el espacio."<<endl;
			cout<<"Horarios: 10:00a, 11:00a, 12:45p, 1:45p, 4:00p, 4:45p, 6:45p, 7:30p, 10:15p"<<endl;
            cout<<"Duracion: 1 hr 09 min"<<endl;
			cout<<"Genero: Animada"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"THE PRODIGY (2019)"<<endl;
			cout<<"Sinopsis: El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 11:30a, 2:00p, 4:30p, 7:00p, 10:00p"<<endl;
            cout<<"Duracion: 1 hr 32 min "<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 10:15a, 11:15a, 1:15p, 2:15p, 4:15p, 5:15p, 7:15p, 8:15p, 10:15p, 10:45p"<<endl;
            cout<<"Duracion: 1 hr 57 min "<<endl;
			cout<<"Genero: Romance"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"MISS BALA (2019)"<<endl;
			cout<<"Sinopsis: Una joven debe burlar a un despiadado cartel de la droga para salvar a su amiga secuestrada en Mexico."<<endl;
			cout<<"Horarios: 10:45a"<<endl;
            cout<<"Duracion: 1 hr 44 min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"QUE LEON"<<endl;
			cout<<"Sinopsis: Nicole y Jose Miguel tienen una cosa en comun: su apellido León. Pero provienen de diferentes entornos sociales, y su amor tendrá que lidiar con la oposicion de sus padres y con un gran numero de situaciones que lo pondran a prueba."<<endl;
			cout<<"Horarios: 11:00a, 4:30p, 10:30p"<<endl;
            cout<<"Duracion: 1 hr 30 min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"GLASS (2019)"<<endl;
			cout<<"Sinopsis: El guardia de seguridad David Dunn usa sus habilidades sobrenaturales para rastrear a Kevin Wendell Crumb, un hombre perturbado que tiene veinticuatro personalidades"<<endl;
			cout<<"Horarios: 3:45p, 9:30p"<<endl;
            cout<<"Duracion: 2 hr 15 min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ESCAPE ROOM (2019)"<<endl;
			cout<<"Sinopsis: Seis extraños se encuentran en circunstancias fuera de su control, y deben usar su ingenio para sobrevivir."<<endl;
			cout<<"Horarios: 4:30p"<<endl;
            cout<<"Duracion 1 hr 45 min:"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"BUMBLEBEE"<<endl;
			cout<<"Sinopsis: A la carrera en el año 1987, Bumblebee the Autobot encuentra refugio en un deposito de chatarra en una pequeña ciudad costera de California. Cuando Charlie, de 17 años, lo revive, rapidamente se entera de que no es un Volkswagen amarillo comun."<<endl;
			cout<<"Horarios: 1:30p, 7:15p"<<endl;
            cout<<"Duracion: 2hr 00 min"<<endl;
			cout<<"Genero:  Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"SPIDER-MAN: INTO THE SPIDER-VERSE"<<endl;
			cout<<"Sinopsis: Spider-Man es el mentor de un adolescente de Brooklyn, Nueva York, para convertirse en el proximo superheroe."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
            cout<<"Duracion: 1 hr 30 min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"RALPH BREAKS THE INTERNET"<<endl;
			cout<<"Sinopsis: Ralph y Vanellope se embarcan en una aventura dentro de Internet para encontrar una pieza de repuesto para un juego."<<endl;
			cout<<"Horarios: 10:00a, 1:00p"<<endl;
            cout<<"Duracion: 1 hr 48 min"<<endl;
			cout<<"Genero: Animada"<<endl<<endl;
			
			cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
    	    {
			system("cls");
			return main();
			system("pause");
			}
			break;
		}

		case 9:{ system("cls");

            cout<<"\t\t\t\t\t\t9. CINEMART CINEMAS\n\n"<<endl<<endl;

			cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detras de su misterioso pasado."<<endl;
			cout<<"Horarios: 10:45a, 1:20p, 3:55p, 6:30p, 9:05p"<<endl;
            cout<<"Duracion: 1hr 45min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl;
			cout<<"Sinopsis: Emmet, Lucy, Batman y sus amigos deben defender a Bricksburg de los invasores de LEGO DUPLO desde el espacio."<<endl;
			cout<<"Horarios: 10:00a, 10:30a, 11:00a, 12:30p, 1:00p, 3:00p, 5:30p, 8:00p, 9:05p"<<endl;
            cout<<"Duracion: 1hr 22min"<<endl;
			cout<<"Genero: Animacion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus  colegas groseros."<<endl;
			cout<<"Horarios: 2:00p, 4:25p, 6:50p, 9:10p"<<endl;
            cout<<"Duracion: 1hr 55min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"GLASS (2019)"<<endl;
			cout<<"Sinopsis: El guardia de seguridad David Dunn usa sus habilidades sobrenaturales para rastrear a Kevin Wendell Crumb, un hombre perturbado que tiene veinticuatro personalidades"<<endl;
			cout<<"Horarios: 3:30p, 6:15p, 9:00p"<<endl;
            cout<<"Duracion: 2hr 2min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;
			
			cout<<"____________________________________________________________"<<endl;
			cout<<"THE FAVOURITE"<<endl;
			cout<<"Sinopsis: A principios del s. XVIII, Inglaterra está en guerra con Francia y la enfermiza reina Anne delega sus responsabilidades en su amiga Lady Sarah."<<endl;
			cout<<"Horarios: 1:00p, 3:45p, 6:30"<<endl;
            cout<<"Duracion: 1hr 30min"<<endl;
			cout<<"Genero: Drama"<<endl<<endl;
			
			cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}

			break;
			}
			
			case 10:{
				
				system("cls");
				return main();
				
				break;
			}
			
			default:{
				
				system("cls");
				return main();
				
				break;
			}
			
			break;
			}
	
	case '3':{   system("cls");

			cout<<"\t\t\t\t\t\t\t3=(Brooklyn)"<<endl<<endl;
            cout<<"\t\t\t\t\t\t1. Alpine Cinema"<<endl;
			cout<<"\t\t\t\t\t\t2. Linden Boulevard multiplex cinemas"<<endl;
			cout<<"\t\t\t\t\t\t3. Williamsburg Cinemas"<<endl;
			cout<<"\t\t\t\t\t\t4. Cobble Hill Cinemas"<<endl;
			cout<<"\t\t\t\t\t\t5. Alamo Drafthouse Cinema Downtown Brooklyn"<<endl;
			cout<<"\t\t\t\t\t\t6. Kent Theater"<<endl;
			cout<<"\t\t\t\t\t\t7. Nitehawk Cinema"<<endl;
			cout<<"\t\t\t\t\t\t8. Film Noir Cinema"<<endl;
			cout<<"\t\t\t\t\t\t9. Regal Cinemas Battery Park 11"<<endl;
			cout<<"\t\t\t\t\t\t10. United Artist Court Street 12 & RPX"<<endl;
			cout<<"\t\t\t\t\t\t11. Cinemart Cinemas"<<endl;
			cout<<"\t\t\t\t\t\t12. United Artist Sheepshead Bay 14 IMAX & RPX"<<endl;
			cout<<"\t\t\t\t\t\t13. Spectacle"<<endl;
			cout<<"\t\t\t\t\t\t14. Bam Rose Cinemas"<<endl;
			cout<<"\t\t\t\t\t\t15. Concourse Plaza Multiplex Cinemas"<<endl;
			cout<<"\t\t\t\t\t\t16. VOLVER"<<endl<<endl;
			cout<<"Elija una opcion:";
			cin>>cines2;
					
					switch(cines2){

			case 1:{ system("cls");

            cout<<"\t\t\t\t\t\t1. Alpine Cinema"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 7:00p, 10:00p, 6:30p, 9:30p"<<endl;
			cout<<"Duracion: 2 hr 2 min "<<endl;
			cout<<"Genero:  Accion"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"HAPPY DEATH DAY 2U"<<endl;
			cout<<"Sinopsis: Un estudiante universitario debe morir una y otra vez para salvar a sus amigos de un asesino enmascarado psicotico.."<<endl;
			cout<<"Horarios: 6:35p, 9:05p"<<endl;
            cout<<"Duracion: 1 hr 40 min "<<endl;
			cout<<"Genero: Terror"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una comedia romántica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  6:45p, 9:15p"<<endl;
            cout<<"Duracion: 1 hr 28 min "<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

			cout<<"____________________________________________________________"<<endl;
			cout<<"COLD PURSUIT"<<endl;
			cout<<"Sinopsis: Un vigilante busca justicia de sangre fria contra un narcotraficante psicotico y sus secuaces sordidos."<<endl;
			cout<<"Horarios: 7:15p, 10:00p"<<endl;
            cout<<"Duracion: 1 hr 58 min "<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl;
			cout<<"Sinopsis: Emmet, Lucy, Batman y sus amigos deben defender a Bricksburg de los invasores de LEGO DUPLO desde el espacio."<<endl;
			cout<<"Horarios: 7:05p, 7:35p, 9:40p, 10:10p"<<endl;
            cout<<"Duracion:  1 hr 47 min "<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"THE PRODIGY (2019)"<<endl;
			cout<<"Sinopsis: El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 7:15p, 9:45p"<<endl;
            cout<<"Duracion: 1 hr 32 min "<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 9:00p"<<endl;
            cout<<"Duracion: 1 hr 57 min "<<endl;
			cout<<"Genero: Romance"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"QUE LEON"<<endl;
			cout<<"Sinopsis: Nicole y Jose Miguel tienen una cosa en comun: su apellido Leon. Pero provienen de diferentes entornos sociales, y su amor tendra que lidiar con la oposicion de sus padres y con un gran numero de situaciones que lo pondran a prueba."<<endl;
			cout<<"Horarios: 7:45p, 10:15p"<<endl;
            cout<<"Duracion: 1 hr 33 min "<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

			
			cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}
				break;
		    }

            case 2:{ system("cls");

            cout<<"\t\t\t\t\t\t2. Linden Boulevard multiplex cinemas"<<endl<<endl;

                        cout<<"____________________________________________________________"<<endl;
			cout<<"Peleando con mi familia"<<endl;
			cout<<"Sinopsis: La película está basada en la historia real de Saraya 'Paige' Bevis, una joven luchadora profesional inglesa, ya retirada, que que actualmente trabaja para la WWE."<<endl;
			cout<<"Horarios:  7:00p, 9:15p"<<endl;
			cout<<"Duracion: 1hr 56min"<<endl;
			cout<<"Genero: Drama"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Como entrenar a tu dragon: El mundo oculto"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 6:00p, 8:15p"<<endl;
			cout<<"Duracion: 1hr 35min"<<endl;
			cout<<"Genero: Animacion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 12:15p, 2:50p, 5:25, 8:00p"<<endl;
			cout<<"Duracion: 1hr 52min 2 hr 2 min "<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Feliz Dia de la muerte 2U"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 12:00p, 2:15p, 4:30p, 6:45p, 9:00p"<<endl;
			cout<<"Duracion: 2hr 8min"<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una comedia romántica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  11:30p, 1:25, 3:20p, 5:15p, 7:10p, 9:05p "<<endl;
			cout<<"Duracion: 1hr 55min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"Persecucion en frio"<<endl;
			cout<<"Sinopsis: El quitanieves Nelson Coxman busca venganza contra un cartel de la droga en su ciudad natal de las Montañas Rocosas después de que su hijo fue asesinado por la banda."<<endl;
			cout<<"Horarios: 12:30p,3:00p,5:30,8:00p"<<endl;
			cout<<"Duracion: 1hr 35min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"LA PELÍCULA DE LEGO 2: LA SEGUNDA PARTE"<<endl;
			cout<<"Sinopsis: Han pasado cinco años desde que todo fue increíble y los ciudadanos se enfrentan a una gran nueva amenaza: los invasores Lego Duplo del espacio exterior, destruyendo todo más rápido de lo que pueden reconstruir. La batalla para derrotarlos y restaurar la armonía en el universo Lego llevará a Emmet, Lucy, Batman y sus amigos a mundos lejanos e inexplorados, incluida una extraña galaxia en la que todo es un musical."<<endl;
			cout<<"Horarios: 11:25p, 12:00p, 12:45p, 1:35p, 2:20p, 3:05p, 3:55p, 4:40p, 5:25p, 6:15, 7:45p, 8:35"<<endl;
			cout<<"Duracion: 1hr 44min"<<endl;
			cout<<"Genero: Animacion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"EL PRODIGIO (2019)"<<endl;
			cout<<"Sinopsis: El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 1:05p, 3:05, 5:05p, 7:05p, 9:05p"<<endl;
			cout<<"Duracion: 1hr 45min"<<endl;
			cout<<"Genero: Terror"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 1:00p, 3:30p, 6:00p, 8:30p"<<endl;
			cout<<"Duracion: 1hr 30min"<<endl;
			cout<<"Genero: Romance"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"GLASS (2019)"<<endl;
			cout<<"Sinopsis: El guardia de seguridad David Dunn usa sus habilidades sobrenaturales para rastrear a Kevin Wendell Crumb, un hombre perturbado que tiene veinticuatro personalidades"<<endl;
			cout<<"Horarios: 12:00p, 2:45"<<endl;
			cout<<"Duracion: 2hr 2min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;
			
            cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}
				break;
		    }

			case 3:{ system("cls");

            cout<<"\t\t\t\t\t\t3. Williamsburg Cinemas"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 7:00p, 10:00p, 6:30p, 9:30p"<<endl;
			cout<<"Duracion: 2 hr 2 min "<<endl;
			cout<<"Genero:  Accion"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"HAPPY DEATH DAY 2U"<<endl;
			cout<<"Sinopsis: Un estudiante universitario debe morir una y otra vez para salvar a sus amigos de un asesino enmascarado psicotico.."<<endl;
			cout<<"Horarios: 6:35p, 9:05p"<<endl;
            cout<<"Duracion: 1 hr 40 min "<<endl;
			cout<<"Genero: Terror"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una comedia romántica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  6:45p, 9:15p"<<endl;
            cout<<"Duracion: 1 hr 28 min "<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

			cout<<"____________________________________________________________"<<endl;
			cout<<"COLD PURSUIT"<<endl;
			cout<<"Sinopsis: Un vigilante busca justicia de sangre fria contra un narcotraficante psicotico y sus secuaces sordidos."<<endl;
			cout<<"Horarios: 7:15p, 10:00p"<<endl;
            cout<<"Duracion: 1 hr 58 min "<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl;
			cout<<"Sinopsis: Emmet, Lucy, Batman y sus amigos deben defender a Bricksburg de los invasores de LEGO DUPLO desde el espacio."<<endl;
			cout<<"Horarios: 7:05p, 7:35p, 9:40p, 10:10p"<<endl;
            cout<<"Duracion:  1 hr 47 min "<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"THE PRODIGY (2019)"<<endl;
			cout<<"Sinopsis: El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 7:15p, 9:45p"<<endl;
            cout<<"Duracion: 1 hr 32 min "<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 9:00p"<<endl;
            cout<<"Duracion: 1 hr 57 min "<<endl;
			cout<<"Genero: Romance"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"QUE LEON"<<endl;
			cout<<"Sinopsis: Nicole y Jose Miguel tienen una cosa en comun: su apellido Leon. Pero provienen de diferentes entornos sociales, y su amor tendra que lidiar con la oposicion de sus padres y con un gran numero de situaciones que lo pondran a prueba."<<endl;
			cout<<"Horarios: 7:45p, 10:15p"<<endl;
            cout<<"Duracion: 1 hr 33 min "<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

            cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}
				break;
		    }

            case 4:{ system("cls");

            cout<<"\t\t\t\t\t\t4. Cobble Hill Cinemas"<<endl<<endl;

                        cout<<"____________________________________________________________"<<endl;
			cout<<"Peleando con mi familia"<<endl;
			cout<<"Sinopsis: La película está basada en la historia real de Saraya 'Paige' Bevis, una joven luchadora profesional inglesa, ya retirada, que que actualmente trabaja para la WWE."<<endl;
			cout<<"Horarios:  7:00p, 9:15p"<<endl;
			cout<<"Duracion: 1hr 56min"<<endl;
			cout<<"Genero: Drama"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Como entrenar a tu dragon: El mundo oculto"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 6:00p, 8:15p"<<endl;
			cout<<"Duracion: 1hr 35min"<<endl;
			cout<<"Genero: Animacion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 12:15p, 2:50p, 5:25, 8:00p"<<endl;
			cout<<"Duracion: 1hr 52min 2 hr 2 min "<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Feliz Dia de la muerte 2U"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 12:00p, 2:15p, 4:30p, 6:45p, 9:00p"<<endl;
			cout<<"Duracion: 2hr 8min"<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una comedia romántica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  11:30p, 1:25, 3:20p, 5:15p, 7:10p, 9:05p "<<endl;
			cout<<"Duracion: 1hr 55min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"Persecucion en frio"<<endl;
			cout<<"Sinopsis: El quitanieves Nelson Coxman busca venganza contra un cartel de la droga en su ciudad natal de las Montañas Rocosas después de que su hijo fue asesinado por la banda."<<endl;
			cout<<"Horarios: 12:30p,3:00p,5:30,8:00p"<<endl;
			cout<<"Duracion: 1hr 35min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"LA PELÍCULA DE LEGO 2: LA SEGUNDA PARTE"<<endl;
			cout<<"Sinopsis: Han pasado cinco años desde que todo fue increíble y los ciudadanos se enfrentan a una gran nueva amenaza: los invasores Lego Duplo del espacio exterior, destruyendo todo más rápido de lo que pueden reconstruir. La batalla para derrotarlos y restaurar la armonía en el universo Lego llevará a Emmet, Lucy, Batman y sus amigos a mundos lejanos e inexplorados, incluida una extraña galaxia en la que todo es un musical."<<endl;
			cout<<"Horarios: 11:25p, 12:00p, 12:45p, 1:35p, 2:20p, 3:05p, 3:55p, 4:40p, 5:25p, 6:15, 7:45p, 8:35"<<endl;
			cout<<"Duracion: 1hr 44min"<<endl;
			cout<<"Genero: Animacion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"EL PRODIGIO (2019)"<<endl;
			cout<<"Sinopsis: El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 1:05p, 3:05, 5:05p, 7:05p, 9:05p"<<endl;
			cout<<"Duracion: 1hr 45min"<<endl;
			cout<<"Genero: Terror"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 1:00p, 3:30p, 6:00p, 8:30p"<<endl;
			cout<<"Duracion: 1hr 30min"<<endl;
			cout<<"Genero: Romance"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"GLASS (2019)"<<endl;
			cout<<"Sinopsis: El guardia de seguridad David Dunn usa sus habilidades sobrenaturales para rastrear a Kevin Wendell Crumb, un hombre perturbado que tiene veinticuatro personalidades"<<endl;
			cout<<"Horarios: 12:00p, 2:45"<<endl;
			cout<<"Duracion: 2hr 2min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;

            cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}
				break;
		    }

            case 5:{ system("cls");

            cout<<"\t\t\t\t\t\t5. Alamo Drafthouse Cinema Downtown Brooklyn"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 7:00p, 10:00p, 6:30p, 9:30p"<<endl;
			cout<<"Duracion: 2 hr 2 min "<<endl;
			cout<<"Genero:  Accion"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"HAPPY DEATH DAY 2U"<<endl;
			cout<<"Sinopsis: Un estudiante universitario debe morir una y otra vez para salvar a sus amigos de un asesino enmascarado psicotico.."<<endl;
			cout<<"Horarios: 6:35p, 9:05p"<<endl;
            cout<<"Duracion: 1 hr 40 min "<<endl;
			cout<<"Genero: Terror"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una comedia romántica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  6:45p, 9:15p"<<endl;
            cout<<"Duracion: 1 hr 28 min "<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

			cout<<"____________________________________________________________"<<endl;
			cout<<"COLD PURSUIT"<<endl;
			cout<<"Sinopsis: Un vigilante busca justicia de sangre fria contra un narcotraficante psicotico y sus secuaces sordidos."<<endl;
			cout<<"Horarios: 7:15p, 10:00p"<<endl;
            cout<<"Duracion: 1 hr 58 min "<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl;
			cout<<"Sinopsis: Emmet, Lucy, Batman y sus amigos deben defender a Bricksburg de los invasores de LEGO DUPLO desde el espacio."<<endl;
			cout<<"Horarios: 7:05p, 7:35p, 9:40p, 10:10p"<<endl;
            cout<<"Duracion:  1 hr 47 min "<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"THE PRODIGY (2019)"<<endl;
			cout<<"Sinopsis: El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 7:15p, 9:45p"<<endl;
            cout<<"Duracion: 1 hr 32 min "<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 9:00p"<<endl;
            cout<<"Duracion: 1 hr 57 min "<<endl;
			cout<<"Genero: Romance"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"QUE LEON"<<endl;
			cout<<"Sinopsis: Nicole y Jose Miguel tienen una cosa en comun: su apellido Leon. Pero provienen de diferentes entornos sociales, y su amor tendra que lidiar con la oposicion de sus padres y con un gran numero de situaciones que lo pondran a prueba."<<endl;
			cout<<"Horarios: 7:45p, 10:15p"<<endl;
            cout<<"Duracion: 1 hr 33 min "<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

            cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}
				break;
		    }

         	case 6:{ system("cls");

            cout<<"\t\t\t\t\t\t6. Kent Theater"<<endl<<endl;

                        cout<<"____________________________________________________________"<<endl;
			cout<<"Peleando con mi familia"<<endl;
			cout<<"Sinopsis: La película está basada en la historia real de Saraya 'Paige' Bevis, una joven luchadora profesional inglesa, ya retirada, que que actualmente trabaja para la WWE."<<endl;
			cout<<"Horarios:  7:00p, 9:15p"<<endl;
			cout<<"Duracion: 1hr 56min"<<endl;
			cout<<"Genero: Drama"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Como entrenar a tu dragon: El mundo oculto"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 6:00p, 8:15p"<<endl;
			cout<<"Duracion: 1hr 35min"<<endl;
			cout<<"Genero: Animacion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 12:15p, 2:50p, 5:25, 8:00p"<<endl;
			cout<<"Duracion: 1hr 52min 2 hr 2 min "<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Feliz Dia de la muerte 2U"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 12:00p, 2:15p, 4:30p, 6:45p, 9:00p"<<endl;
			cout<<"Duracion: 2hr 8min"<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una comedia romántica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  11:30p, 1:25, 3:20p, 5:15p, 7:10p, 9:05p "<<endl;
			cout<<"Duracion: 1hr 55min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"Persecucion en frio"<<endl;
			cout<<"Sinopsis: El quitanieves Nelson Coxman busca venganza contra un cartel de la droga en su ciudad natal de las Montañas Rocosas después de que su hijo fue asesinado por la banda."<<endl;
			cout<<"Horarios: 12:30p,3:00p,5:30,8:00p"<<endl;
			cout<<"Duracion: 1hr 35min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"LA PELÍCULA DE LEGO 2: LA SEGUNDA PARTE"<<endl;
			cout<<"Sinopsis: Han pasado cinco años desde que todo fue increíble y los ciudadanos se enfrentan a una gran nueva amenaza: los invasores Lego Duplo del espacio exterior, destruyendo todo más rápido de lo que pueden reconstruir. La batalla para derrotarlos y restaurar la armonía en el universo Lego llevará a Emmet, Lucy, Batman y sus amigos a mundos lejanos e inexplorados, incluida una extraña galaxia en la que todo es un musical."<<endl;
			cout<<"Horarios: 11:25p, 12:00p, 12:45p, 1:35p, 2:20p, 3:05p, 3:55p, 4:40p, 5:25p, 6:15, 7:45p, 8:35"<<endl;
			cout<<"Duracion: 1hr 44min"<<endl;
			cout<<"Genero: Animacion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"EL PRODIGIO (2019)"<<endl;
			cout<<"Sinopsis: El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 1:05p, 3:05, 5:05p, 7:05p, 9:05p"<<endl;
			cout<<"Duracion: 1hr 45min"<<endl;
			cout<<"Genero: Terror"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 1:00p, 3:30p, 6:00p, 8:30p"<<endl;
			cout<<"Duracion: 1hr 30min"<<endl;
			cout<<"Genero: Romance"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"GLASS (2019)"<<endl;
			cout<<"Sinopsis: El guardia de seguridad David Dunn usa sus habilidades sobrenaturales para rastrear a Kevin Wendell Crumb, un hombre perturbado que tiene veinticuatro personalidades"<<endl;
			cout<<"Horarios: 12:00p, 2:45"<<endl;
			cout<<"Duracion: 2hr 2min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;

            cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}
				break;
		    }

            case 7:{ system("cls");

            cout<<"\t\t\t\t\t\t7. Nitehawk Cinema"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 7:00p, 10:00p, 6:30p, 9:30p"<<endl;
			cout<<"Duracion: 2 hr 2 min "<<endl;
			cout<<"Genero:  Accion"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"HAPPY DEATH DAY 2U"<<endl;
			cout<<"Sinopsis: Un estudiante universitario debe morir una y otra vez para salvar a sus amigos de un asesino enmascarado psicotico.."<<endl;
			cout<<"Horarios: 6:35p, 9:05p"<<endl;
            cout<<"Duracion: 1 hr 40 min "<<endl;
			cout<<"Genero: Terror"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una comedia romántica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  6:45p, 9:15p"<<endl;
            cout<<"Duracion: 1 hr 28 min "<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

			cout<<"____________________________________________________________"<<endl;
			cout<<"COLD PURSUIT"<<endl;
			cout<<"Sinopsis: Un vigilante busca justicia de sangre fria contra un narcotraficante psicotico y sus secuaces sordidos."<<endl;
			cout<<"Horarios: 7:15p, 10:00p"<<endl;
            cout<<"Duracion: 1 hr 58 min "<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl;
			cout<<"Sinopsis: Emmet, Lucy, Batman y sus amigos deben defender a Bricksburg de los invasores de LEGO DUPLO desde el espacio."<<endl;
			cout<<"Horarios: 7:05p, 7:35p, 9:40p, 10:10p"<<endl;
            cout<<"Duracion:  1 hr 47 min "<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"THE PRODIGY (2019)"<<endl;
			cout<<"Sinopsis: El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 7:15p, 9:45p"<<endl;
            cout<<"Duracion: 1 hr 32 min "<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 9:00p"<<endl;
            cout<<"Duracion: 1 hr 57 min "<<endl;
			cout<<"Genero: Romance"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"QUE LEON"<<endl;
			cout<<"Sinopsis: Nicole y Jose Miguel tienen una cosa en comun: su apellido Leon. Pero provienen de diferentes entornos sociales, y su amor tendra que lidiar con la oposicion de sus padres y con un gran numero de situaciones que lo pondran a prueba."<<endl;
			cout<<"Horarios: 7:45p, 10:15p"<<endl;
            cout<<"Duracion: 1 hr 33 min "<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

            cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}
				break;
		    }
		    
		    case 8:{ system("cls");

            cout<<"\t\t\t\t\t\t8. Film Noir Cinema"<<endl<<endl;

                        cout<<"____________________________________________________________"<<endl;
			cout<<"Peleando con mi familia"<<endl;
			cout<<"Sinopsis: La película está basada en la historia real de Saraya 'Paige' Bevis, una joven luchadora profesional inglesa, ya retirada, que que actualmente trabaja para la WWE."<<endl;
			cout<<"Horarios:  7:00p, 9:15p"<<endl;
			cout<<"Duracion: 1hr 56min"<<endl;
			cout<<"Genero: Drama"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Como entrenar a tu dragon: El mundo oculto"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 6:00p, 8:15p"<<endl;
			cout<<"Duracion: 1hr 35min"<<endl;
			cout<<"Genero: Animacion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 12:15p, 2:50p, 5:25, 8:00p"<<endl;
			cout<<"Duracion: 1hr 52min 2 hr 2 min "<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Feliz Dia de la muerte 2U"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 12:00p, 2:15p, 4:30p, 6:45p, 9:00p"<<endl;
			cout<<"Duracion: 2hr 8min"<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una comedia romántica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  11:30p, 1:25, 3:20p, 5:15p, 7:10p, 9:05p "<<endl;
			cout<<"Duracion: 1hr 55min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"Persecucion en frio"<<endl;
			cout<<"Sinopsis: El quitanieves Nelson Coxman busca venganza contra un cartel de la droga en su ciudad natal de las Montañas Rocosas después de que su hijo fue asesinado por la banda."<<endl;
			cout<<"Horarios: 12:30p,3:00p,5:30,8:00p"<<endl;
			cout<<"Duracion: 1hr 35min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"LA PELÍCULA DE LEGO 2: LA SEGUNDA PARTE"<<endl;
			cout<<"Sinopsis: Han pasado cinco años desde que todo fue increíble y los ciudadanos se enfrentan a una gran nueva amenaza: los invasores Lego Duplo del espacio exterior, destruyendo todo más rápido de lo que pueden reconstruir. La batalla para derrotarlos y restaurar la armonía en el universo Lego llevará a Emmet, Lucy, Batman y sus amigos a mundos lejanos e inexplorados, incluida una extraña galaxia en la que todo es un musical."<<endl;
			cout<<"Horarios: 11:25p, 12:00p, 12:45p, 1:35p, 2:20p, 3:05p, 3:55p, 4:40p, 5:25p, 6:15, 7:45p, 8:35"<<endl;
			cout<<"Duracion: 1hr 44min"<<endl;
			cout<<"Genero: Animacion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"EL PRODIGIO (2019)"<<endl;
			cout<<"Sinopsis: El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 1:05p, 3:05, 5:05p, 7:05p, 9:05p"<<endl;
			cout<<"Duracion: 1hr 45min"<<endl;
			cout<<"Genero: Terror"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 1:00p, 3:30p, 6:00p, 8:30p"<<endl;
			cout<<"Duracion: 1hr 30min"<<endl;
			cout<<"Genero: Romance"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"GLASS (2019)"<<endl;
			cout<<"Sinopsis: El guardia de seguridad David Dunn usa sus habilidades sobrenaturales para rastrear a Kevin Wendell Crumb, un hombre perturbado que tiene veinticuatro personalidades"<<endl;
			cout<<"Horarios: 12:00p, 2:45"<<endl;
			cout<<"Duracion: 2hr 2min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;

            cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}
				break;
		    }
		    
		    case 9:{ system("cls");

            cout<<"\t\t\t\t\t\t9. Regal Cinemas Battery Park 11"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 7:00p, 10:00p, 6:30p, 9:30p"<<endl;
			cout<<"Duracion: 2 hr 2 min "<<endl;
			cout<<"Genero:  Accion"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"HAPPY DEATH DAY 2U"<<endl;
			cout<<"Sinopsis: Un estudiante universitario debe morir una y otra vez para salvar a sus amigos de un asesino enmascarado psicotico.."<<endl;
			cout<<"Horarios: 6:35p, 9:05p"<<endl;
            cout<<"Duracion: 1 hr 40 min "<<endl;
			cout<<"Genero: Terror"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una comedia romántica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  6:45p, 9:15p"<<endl;
            cout<<"Duracion: 1 hr 28 min "<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

			cout<<"____________________________________________________________"<<endl;
			cout<<"COLD PURSUIT"<<endl;
			cout<<"Sinopsis: Un vigilante busca justicia de sangre fria contra un narcotraficante psicotico y sus secuaces sordidos."<<endl;
			cout<<"Horarios: 7:15p, 10:00p"<<endl;
            cout<<"Duracion: 1 hr 58 min "<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl;
			cout<<"Sinopsis: Emmet, Lucy, Batman y sus amigos deben defender a Bricksburg de los invasores de LEGO DUPLO desde el espacio."<<endl;
			cout<<"Horarios: 7:05p, 7:35p, 9:40p, 10:10p"<<endl;
            cout<<"Duracion:  1 hr 47 min "<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"THE PRODIGY (2019)"<<endl;
			cout<<"Sinopsis: El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 7:15p, 9:45p"<<endl;
            cout<<"Duracion: 1 hr 32 min "<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 9:00p"<<endl;
            cout<<"Duracion: 1 hr 57 min "<<endl;
			cout<<"Genero: Romance"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"QUE LEON"<<endl;
			cout<<"Sinopsis: Nicole y Jose Miguel tienen una cosa en comun: su apellido Leon. Pero provienen de diferentes entornos sociales, y su amor tendra que lidiar con la oposicion de sus padres y con un gran numero de situaciones que lo pondran a prueba."<<endl;
			cout<<"Horarios: 7:45p, 10:15p"<<endl;
            cout<<"Duracion: 1 hr 33 min "<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

            cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}
				break;
		    }

            case 10:{ system("cls");

            cout<<"\t\t\t\t\t\t10. United Artist Court Street 12 & RPX"<<endl<<endl;

                        cout<<"____________________________________________________________"<<endl;
			cout<<"Peleando con mi familia"<<endl;
			cout<<"Sinopsis: La película está basada en la historia real de Saraya 'Paige' Bevis, una joven luchadora profesional inglesa, ya retirada, que que actualmente trabaja para la WWE."<<endl;
			cout<<"Horarios:  7:00p, 9:15p"<<endl;
			cout<<"Duracion: 1hr 56min"<<endl;
			cout<<"Genero: Drama"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Como entrenar a tu dragon: El mundo oculto"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 6:00p, 8:15p"<<endl;
			cout<<"Duracion: 1hr 35min"<<endl;
			cout<<"Genero: Animacion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 12:15p, 2:50p, 5:25, 8:00p"<<endl;
			cout<<"Duracion: 1hr 52min 2 hr 2 min "<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Feliz Dia de la muerte 2U"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 12:00p, 2:15p, 4:30p, 6:45p, 9:00p"<<endl;
			cout<<"Duracion: 2hr 8min"<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una comedia romántica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  11:30p, 1:25, 3:20p, 5:15p, 7:10p, 9:05p "<<endl;
			cout<<"Duracion: 1hr 55min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"Persecucion en frio"<<endl;
			cout<<"Sinopsis: El quitanieves Nelson Coxman busca venganza contra un cartel de la droga en su ciudad natal de las Montañas Rocosas después de que su hijo fue asesinado por la banda."<<endl;
			cout<<"Horarios: 12:30p,3:00p,5:30,8:00p"<<endl;
			cout<<"Duracion: 1hr 35min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"LA PELÍCULA DE LEGO 2: LA SEGUNDA PARTE"<<endl;
			cout<<"Sinopsis: Han pasado cinco años desde que todo fue increíble y los ciudadanos se enfrentan a una gran nueva amenaza: los invasores Lego Duplo del espacio exterior, destruyendo todo más rápido de lo que pueden reconstruir. La batalla para derrotarlos y restaurar la armonía en el universo Lego llevará a Emmet, Lucy, Batman y sus amigos a mundos lejanos e inexplorados, incluida una extraña galaxia en la que todo es un musical."<<endl;
			cout<<"Horarios: 11:25p, 12:00p, 12:45p, 1:35p, 2:20p, 3:05p, 3:55p, 4:40p, 5:25p, 6:15, 7:45p, 8:35"<<endl;
			cout<<"Duracion: 1hr 44min"<<endl;
			cout<<"Genero: Animacion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"EL PRODIGIO (2019)"<<endl;
			cout<<"Sinopsis: El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 1:05p, 3:05, 5:05p, 7:05p, 9:05p"<<endl;
			cout<<"Duracion: 1hr 45min"<<endl;
			cout<<"Genero: Terror"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 1:00p, 3:30p, 6:00p, 8:30p"<<endl;
			cout<<"Duracion: 1hr 30min"<<endl;
			cout<<"Genero: Romance"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"GLASS (2019)"<<endl;
			cout<<"Sinopsis: El guardia de seguridad David Dunn usa sus habilidades sobrenaturales para rastrear a Kevin Wendell Crumb, un hombre perturbado que tiene veinticuatro personalidades"<<endl;
			cout<<"Horarios: 12:00p, 2:45"<<endl;
			cout<<"Duracion: 2hr 2min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;

            cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}
				break;
		    }

             case 11:{ system("cls");

            cout<<"\t\t\t\t\t\t11. Cinemart Cinemas"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 7:00p, 10:00p, 6:30p, 9:30p"<<endl;
			cout<<"Duracion: 2 hr 2 min "<<endl;
			cout<<"Genero:  Accion"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"HAPPY DEATH DAY 2U"<<endl;
			cout<<"Sinopsis: Un estudiante universitario debe morir una y otra vez para salvar a sus amigos de un asesino enmascarado psicotico.."<<endl;
			cout<<"Horarios: 6:35p, 9:05p"<<endl;
            cout<<"Duracion: 1 hr 40 min "<<endl;
			cout<<"Genero: Terror"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una comedia romántica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  6:45p, 9:15p"<<endl;
            cout<<"Duracion: 1 hr 28 min "<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

			cout<<"____________________________________________________________"<<endl;
			cout<<"COLD PURSUIT"<<endl;
			cout<<"Sinopsis: Un vigilante busca justicia de sangre fria contra un narcotraficante psicotico y sus secuaces sordidos."<<endl;
			cout<<"Horarios: 7:15p, 10:00p"<<endl;
            cout<<"Duracion: 1 hr 58 min "<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl;
			cout<<"Sinopsis: Emmet, Lucy, Batman y sus amigos deben defender a Bricksburg de los invasores de LEGO DUPLO desde el espacio."<<endl;
			cout<<"Horarios: 7:05p, 7:35p, 9:40p, 10:10p"<<endl;
            cout<<"Duracion:  1 hr 47 min "<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"THE PRODIGY (2019)"<<endl;
			cout<<"Sinopsis: El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 7:15p, 9:45p"<<endl;
            cout<<"Duracion: 1 hr 32 min "<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 9:00p"<<endl;
            cout<<"Duracion: 1 hr 57 min "<<endl;
			cout<<"Genero: Romance"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"QUE LEON"<<endl;
			cout<<"Sinopsis: Nicole y Jose Miguel tienen una cosa en comun: su apellido Leon. Pero provienen de diferentes entornos sociales, y su amor tendra que lidiar con la oposicion de sus padres y con un gran numero de situaciones que lo pondran a prueba."<<endl;
			cout<<"Horarios: 7:45p, 10:15p"<<endl;
            cout<<"Duracion: 1 hr 33 min "<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

            cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}
				break;
		    }
		    
		     case 12:{ system("cls");

            cout<<"\t\t\t\t\t\t12. United Artist Sheepshead Bay 14 IMAX & RPX"<<endl<<endl;

                        cout<<"____________________________________________________________"<<endl;
			cout<<"Peleando con mi familia"<<endl;
			cout<<"Sinopsis: La película está basada en la historia real de Saraya 'Paige' Bevis, una joven luchadora profesional inglesa, ya retirada, que que actualmente trabaja para la WWE."<<endl;
			cout<<"Horarios:  7:00p, 9:15p"<<endl;
			cout<<"Duracion: 1hr 56min"<<endl;
			cout<<"Genero: Drama"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Como entrenar a tu dragon: El mundo oculto"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 6:00p, 8:15p"<<endl;
			cout<<"Duracion: 1hr 35min"<<endl;
			cout<<"Genero: Animacion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 12:15p, 2:50p, 5:25, 8:00p"<<endl;
			cout<<"Duracion: 1hr 52min 2 hr 2 min "<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Feliz Dia de la muerte 2U"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 12:00p, 2:15p, 4:30p, 6:45p, 9:00p"<<endl;
			cout<<"Duracion: 2hr 8min"<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una comedia romántica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  11:30p, 1:25, 3:20p, 5:15p, 7:10p, 9:05p "<<endl;
			cout<<"Duracion: 1hr 55min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"Persecucion en frio"<<endl;
			cout<<"Sinopsis: El quitanieves Nelson Coxman busca venganza contra un cartel de la droga en su ciudad natal de las Montañas Rocosas después de que su hijo fue asesinado por la banda."<<endl;
			cout<<"Horarios: 12:30p,3:00p,5:30,8:00p"<<endl;
			cout<<"Duracion: 1hr 35min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"LA PELÍCULA DE LEGO 2: LA SEGUNDA PARTE"<<endl;
			cout<<"Sinopsis: Han pasado cinco años desde que todo fue increíble y los ciudadanos se enfrentan a una gran nueva amenaza: los invasores Lego Duplo del espacio exterior, destruyendo todo más rápido de lo que pueden reconstruir. La batalla para derrotarlos y restaurar la armonía en el universo Lego llevará a Emmet, Lucy, Batman y sus amigos a mundos lejanos e inexplorados, incluida una extraña galaxia en la que todo es un musical."<<endl;
			cout<<"Horarios: 11:25p, 12:00p, 12:45p, 1:35p, 2:20p, 3:05p, 3:55p, 4:40p, 5:25p, 6:15, 7:45p, 8:35"<<endl;
			cout<<"Duracion: 1hr 44min"<<endl;
			cout<<"Genero: Animacion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"EL PRODIGIO (2019)"<<endl;
			cout<<"Sinopsis: El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 1:05p, 3:05, 5:05p, 7:05p, 9:05p"<<endl;
			cout<<"Duracion: 1hr 45min"<<endl;
			cout<<"Genero: Terror"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 1:00p, 3:30p, 6:00p, 8:30p"<<endl;
			cout<<"Duracion: 1hr 30min"<<endl;
			cout<<"Genero: Romance"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"GLASS (2019)"<<endl;
			cout<<"Sinopsis: El guardia de seguridad David Dunn usa sus habilidades sobrenaturales para rastrear a Kevin Wendell Crumb, un hombre perturbado que tiene veinticuatro personalidades"<<endl;
			cout<<"Horarios: 12:00p, 2:45"<<endl;
			cout<<"Duracion: 2hr 2min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;

            cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}
				break;
		    }
		    
		     case 13:{ system("cls");

            cout<<"\t\t\t\t\t\t13. Spectacle"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 7:00p, 10:00p, 6:30p, 9:30p"<<endl;
			cout<<"Duracion: 2 hr 2 min "<<endl;
			cout<<"Genero:  Accion"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"HAPPY DEATH DAY 2U"<<endl;
			cout<<"Sinopsis: Un estudiante universitario debe morir una y otra vez para salvar a sus amigos de un asesino enmascarado psicotico.."<<endl;
			cout<<"Horarios: 6:35p, 9:05p"<<endl;
            cout<<"Duracion: 1 hr 40 min "<<endl;
			cout<<"Genero: Terror"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una comedia romántica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  6:45p, 9:15p"<<endl;
            cout<<"Duracion: 1 hr 28 min "<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

			cout<<"____________________________________________________________"<<endl;
			cout<<"COLD PURSUIT"<<endl;
			cout<<"Sinopsis: Un vigilante busca justicia de sangre fria contra un narcotraficante psicotico y sus secuaces sordidos."<<endl;
			cout<<"Horarios: 7:15p, 10:00p"<<endl;
            cout<<"Duracion: 1 hr 58 min "<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl;
			cout<<"Sinopsis: Emmet, Lucy, Batman y sus amigos deben defender a Bricksburg de los invasores de LEGO DUPLO desde el espacio."<<endl;
			cout<<"Horarios: 7:05p, 7:35p, 9:40p, 10:10p"<<endl;
            cout<<"Duracion:  1 hr 47 min "<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"THE PRODIGY (2019)"<<endl;
			cout<<"Sinopsis: El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 7:15p, 9:45p"<<endl;
            cout<<"Duracion: 1 hr 32 min "<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 9:00p"<<endl;
            cout<<"Duracion: 1 hr 57 min "<<endl;
			cout<<"Genero: Romance"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"QUE LEON"<<endl;
			cout<<"Sinopsis: Nicole y Jose Miguel tienen una cosa en comun: su apellido Leon. Pero provienen de diferentes entornos sociales, y su amor tendra que lidiar con la oposicion de sus padres y con un gran numero de situaciones que lo pondran a prueba."<<endl;
			cout<<"Horarios: 7:45p, 10:15p"<<endl;
            cout<<"Duracion: 1 hr 33 min "<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

            cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}
				break;
		    }
		    
		     case 14:{ system("cls");

            cout<<"\t\t\t\t\t\t14. Bam Rose Cinemas"<<endl<<endl;

                        cout<<"____________________________________________________________"<<endl;
			cout<<"Peleando con mi familia"<<endl;
			cout<<"Sinopsis: La película está basada en la historia real de Saraya 'Paige' Bevis, una joven luchadora profesional inglesa, ya retirada, que que actualmente trabaja para la WWE."<<endl;
			cout<<"Horarios:  7:00p, 9:15p"<<endl;
			cout<<"Duracion: 1hr 56min"<<endl;
			cout<<"Genero: Drama"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Como entrenar a tu dragon: El mundo oculto"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 6:00p, 8:15p"<<endl;
			cout<<"Duracion: 1hr 35min"<<endl;
			cout<<"Genero: Animacion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 12:15p, 2:50p, 5:25, 8:00p"<<endl;
			cout<<"Duracion: 1hr 52min 2 hr 2 min "<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Feliz Dia de la muerte 2U"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 12:00p, 2:15p, 4:30p, 6:45p, 9:00p"<<endl;
			cout<<"Duracion: 2hr 8min"<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una comedia romántica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  11:30p, 1:25, 3:20p, 5:15p, 7:10p, 9:05p "<<endl;
			cout<<"Duracion: 1hr 55min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"Persecucion en frio"<<endl;
			cout<<"Sinopsis: El quitanieves Nelson Coxman busca venganza contra un cartel de la droga en su ciudad natal de las Montañas Rocosas después de que su hijo fue asesinado por la banda."<<endl;
			cout<<"Horarios: 12:30p,3:00p,5:30,8:00p"<<endl;
			cout<<"Duracion: 1hr 35min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"LA PELÍCULA DE LEGO 2: LA SEGUNDA PARTE"<<endl;
			cout<<"Sinopsis: Han pasado cinco años desde que todo fue increíble y los ciudadanos se enfrentan a una gran nueva amenaza: los invasores Lego Duplo del espacio exterior, destruyendo todo más rápido de lo que pueden reconstruir. La batalla para derrotarlos y restaurar la armonía en el universo Lego llevará a Emmet, Lucy, Batman y sus amigos a mundos lejanos e inexplorados, incluida una extraña galaxia en la que todo es un musical."<<endl;
			cout<<"Horarios: 11:25p, 12:00p, 12:45p, 1:35p, 2:20p, 3:05p, 3:55p, 4:40p, 5:25p, 6:15, 7:45p, 8:35"<<endl;
			cout<<"Duracion: 1hr 44min"<<endl;
			cout<<"Genero: Animacion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"EL PRODIGIO (2019)"<<endl;
			cout<<"Sinopsis: El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 1:05p, 3:05, 5:05p, 7:05p, 9:05p"<<endl;
			cout<<"Duracion: 1hr 45min"<<endl;
			cout<<"Genero: Terror"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 1:00p, 3:30p, 6:00p, 8:30p"<<endl;
			cout<<"Duracion: 1hr 30min"<<endl;
			cout<<"Genero: Romance"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"GLASS (2019)"<<endl;
			cout<<"Sinopsis: El guardia de seguridad David Dunn usa sus habilidades sobrenaturales para rastrear a Kevin Wendell Crumb, un hombre perturbado que tiene veinticuatro personalidades"<<endl;
			cout<<"Horarios: 12:00p, 2:45"<<endl;
			cout<<"Duracion: 2hr 2min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;

            cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}
				break;
		    }
		    
		     case 15:{ system("cls");

			cout<<"\t\t\t\t\t\t15. Concourse Plaza Multiplex Cinemas"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 7:00p, 10:00p, 6:30p, 9:30p"<<endl;
			cout<<"Duracion: 2 hr 2 min "<<endl;
			cout<<"Genero:  Accion"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"HAPPY DEATH DAY 2U"<<endl;
			cout<<"Sinopsis: Un estudiante universitario debe morir una y otra vez para salvar a sus amigos de un asesino enmascarado psicotico.."<<endl;
			cout<<"Horarios: 6:35p, 9:05p"<<endl;
            cout<<"Duracion: 1 hr 40 min "<<endl;
			cout<<"Genero: Terror"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una comedia romántica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  6:45p, 9:15p"<<endl;
            cout<<"Duracion: 1 hr 28 min "<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

			cout<<"____________________________________________________________"<<endl;
			cout<<"COLD PURSUIT"<<endl;
			cout<<"Sinopsis: Un vigilante busca justicia de sangre fria contra un narcotraficante psicotico y sus secuaces sordidos."<<endl;
			cout<<"Horarios: 7:15p, 10:00p"<<endl;
            cout<<"Duracion: 1 hr 58 min "<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"THE LEGO MOVIE 2: THE SECOND PART"<<endl;
			cout<<"Sinopsis: Emmet, Lucy, Batman y sus amigos deben defender a Bricksburg de los invasores de LEGO DUPLO desde el espacio."<<endl;
			cout<<"Horarios: 7:05p, 7:35p, 9:40p, 10:10p"<<endl;
            cout<<"Duracion:  1 hr 47 min "<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"THE PRODIGY (2019)"<<endl;
			cout<<"Sinopsis: El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 7:15p, 9:45p"<<endl;
            cout<<"Duracion: 1 hr 32 min "<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 9:00p"<<endl;
            cout<<"Duracion: 1 hr 57 min "<<endl;
			cout<<"Genero: Romance"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"QUE LEON"<<endl;
			cout<<"Sinopsis: Nicole y Jose Miguel tienen una cosa en comun: su apellido Leon. Pero provienen de diferentes entornos sociales, y su amor tendra que lidiar con la oposicion de sus padres y con un gran numero de situaciones que lo pondran a prueba."<<endl;
			cout<<"Horarios: 7:45p, 10:15p"<<endl;
            cout<<"Duracion: 1 hr 33 min "<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

            cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}
				break;
		    }

			default:{
				
				system("cls");
				return main();
				
				break;
			}


			}
		break;
		}
	case '4':{    system("cls");

            cout<<"\t\t\t\t\t\t\t4=(Manhattan)"<<endl<<endl;
			cout<<"\t\t\t\t\t\t1. REGAL UNION SQUARE STADIUM 14"<<endl;
			cout<<"\t\t\t\t\t\t2. CINEAPOLIS CHELSEA"<<endl;
			cout<<"\t\t\t\t\t\t3. VILLAGE EAST CINEMA"<<endl;
			cout<<"\t\t\t\t\t\t4. CITY CINEMAS"<<endl;
			cout<<"\t\t\t\t\t\t5. ROXY CINEMA"<<endl;
			cout<<"\t\t\t\t\t\t6. EAST 86TH ST. CINEMA"<<endl;
			cout<<"\t\t\t\t\t\t7. REGAL CINEMA BATTERY PARK 11"<<endl;
			cout<<"\t\t\t\t\t\t8. AMC LINCOLN SQUARE 13"<<endl;
			cout<<"\t\t\t\t\t\t9. CINEMAS 1, 2 Y 3"<<endl;
			cout<<"\t\t\t\t\t\t10. REGAL CINEMAS E-WALK 13 Y RPX"<<endl;
			cout<<"\t\t\t\t\t\t11. CINEMA VILLAGE"<<endl;
			cout<<"\t\t\t\t\t\t12. IPIC THEATHERS"<<endl;
			cout<<"\t\t\t\t\t\t13. ANGELIKA FILM"<<endl;
			cout<<"\t\t\t\t\t\t14. AMC EMPIRE 25"<<endl;
			cout<<"\t\t\t\t\t\t15. VOLVER"<<endl<<endl;
			cout<<"Elija una opcion:";
			cin>>cines3;
			
					switch(cines3){

			case 1:{ system("cls");

            cout<<"\t\t\t\t\t\t1. REGAL UNION SQUARE STADIUM 14"<<endl<<endl;

                        cout<<"____________________________________________________________"<<endl;
			cout<<"ESCAPE ROOM (2019)"<<endl;
			cout<<"Sinopsis: Seis extraños se encuentran en circunstancias fuera de su control, y deben usar su ingenio para sobrevivir."<<endl;
			cout<<"Horarios: 4:30p"<<endl;
            cout<<"Duracion: 1hr 30min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"BUMBLEBEE"<<endl;
			cout<<"Sinopsis: A la carrera en el año 1987, Bumblebee the Autobot encuentra refugio en un deposito de chatarra en una pequeña ciudad costera de California. Cuando Charlie, de 17 años, lo revive, rapidamente se entera de que no es un Volkswagen amarillo comun."<<endl;
			cout<<"Horarios: 1:30p, 7:15p"<<endl;
            cout<<"Duracion: 1hr 45min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"SPIDER-MAN: INTO THE SPIDER-VERSE"<<endl;
			cout<<"Sinopsis: Spider-Man es el mentor de un adolescente de Brooklyn, Nueva York, para convertirse en el proximo superheroe."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
            cout<<"Duracion: 1hr 22min"<<endl;
			cout<<"Genero: Fantasia"<<endl<<endl;

			cout<<"____________________________________________________________"<<endl;
			cout<<"THE FAVOURITE"<<endl;
			cout<<"Sinopsis: A principios del s. XVIII, Inglaterra está en guerra con Francia y la enfermiza reina Anne delega sus responsabilidades en su amiga Lady Sarah."<<endl;
			cout<<"Horarios: 1:00p, 3:45p, 6:30"<<endl;
            cout<<"Duracion: 1hr 25min"<<endl;
			cout<<"Genero: Drama"<<endl<<endl;

			cout<<"____________________________________________________________"<<endl;
			cout<<"Green Book"<<endl;
			cout<<"Sinopsis: Un pianista negro contrata a un rudo italoamericano para que sea su chofer y guardaespaldas durante una gira por el sur de los Estados Unidos en 1962, un viaje que les adentra en un territorio y una época subyugados al racismo."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 55min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;

            cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}
				break;
		    }

            case 2:{ system("cls");

            cout<<"\t\t\t\t\t\t2. CINEAPOLIS CHELSEA"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ESCAPE ROOM (2019)"<<endl;
			cout<<"Sinopsis: Seis extraños se encuentran en circunstancias fuera de su control, y deben usar su ingenio para sobrevivir."<<endl;
			cout<<"Horarios: 4:30p"<<endl;
            cout<<"Duracion: 1hr 30min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"BUMBLEBEE"<<endl;
			cout<<"Sinopsis: A la carrera en el año 1987, Bumblebee the Autobot encuentra refugio en un deposito de chatarra en una pequeña ciudad costera de California. Cuando Charlie, de 17 años, lo revive, rapidamente se entera de que no es un Volkswagen amarillo comun."<<endl;
			cout<<"Horarios: 1:30p, 7:15p"<<endl;
            cout<<"Duracion: 1hr 45min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"SPIDER-MAN: INTO THE SPIDER-VERSE"<<endl;
			cout<<"Sinopsis: Spider-Man es el mentor de un adolescente de Brooklyn, Nueva York, para convertirse en el proximo superheroe."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
            cout<<"Duracion: 1hr 22min"<<endl;
			cout<<"Genero: Fantasia"<<endl<<endl;

			cout<<"____________________________________________________________"<<endl;
			cout<<"THE FAVOURITE"<<endl;
			cout<<"Sinopsis: A principios del s. XVIII, Inglaterra está en guerra con Francia y la enfermiza reina Anne delega sus responsabilidades en su amiga Lady Sarah."<<endl;
			cout<<"Horarios: 1:00p, 3:45p, 6:30"<<endl;
            cout<<"Duracion: 1hr 25min"<<endl;
			cout<<"Genero: Drama"<<endl<<endl;

			cout<<"____________________________________________________________"<<endl;
			cout<<"Green Book"<<endl;
			cout<<"Sinopsis: Un pianista negro contrata a un rudo italoamericano para que sea su chofer y guardaespaldas durante una gira por el sur de los Estados Unidos en 1962, un viaje que les adentra en un territorio y una época subyugados al racismo."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 55min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;

            cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}
				break;
		    }

			case 3:{ system("cls");

            cout<<"\t\t\t\t\t\t3. VILLAGE EAST CINEMA"<<endl<<endl;

			cout<<"____________________________________________________________"<<endl;
			cout<<"Peleando con mi familia"<<endl;
			cout<<"Sinopsis: La película está basada en la historia real de Saraya 'Paige' Bevis, una joven luchadora profesional inglesa, ya retirada, que que actualmente trabaja para la WWE."<<endl;
			cout<<"Horarios:  7:00p, 9:50p"<<endl;
			cout<<"Duracion: 1hr 48min"<<endl;
			cout<<"Genero: Drama"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Como entrenar a tu dragon: El mundo oculto"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 6:00p, 8:45p"<<endl;
			cout<<"Duracion: 1hr 44min"<<endl;
			cout<<"Genero: Animacion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Run the Race"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 7:00p, 9:40p"<<endl;
			cout<<"Duracion: 1hr 55min"<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 1:10p, 4:10p, 7:15"<<endl;
			cout<<"Duracion: 1hr 45min 1hr 46min 2 hr 2 min "<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Feliz Dia de la muerte 2U"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 12:30p, 1:30p,3:30p, 4:30p, 6:30p, 7:30p, 9:30p, 10:10p"<<endl;
			cout<<"Duracion: 2hr 30min 1hr 46min"<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una comedia romántica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  12:30p, 3:00p, 5:30p, 8:00p, 10:30p"<<endl;
			cout<<"Duracion: 1hr 28min 1hr 46min 1 hr 30 min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"Persecucion en frio"<<endl;
			cout<<"Sinopsis: El quitanieves Nelson Coxman busca venganza contra un cartel de la droga en su ciudad natal de las Montañas Rocosas después de que su hijo fue asesinado por la banda."<<endl;
			cout<<"Horarios: 1:05p, 4:15p, 7:35p, 10:30p"<<endl;
			cout<<"Duracion: 1hr 26min 1hr 46min"<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"LA PELÍCULA DE LEGO 2: LA SEGUNDA PARTE"<<endl;
			cout<<"Sinopsis: Han pasado cinco años desde que todo fue increíble y los ciudadanos se enfrentan a una gran nueva amenaza: los invasores Lego Duplo del espacio exterior, destruyendo todo más rápido de lo que pueden reconstruir. La batalla para derrotarlos y restaurar la armonía en el universo Lego llevará a Emmet, Lucy, Batman y sus amigos a mundos lejanos e inexplorados, incluida una extraña galaxia en la que todo es un musical."<<endl;
			cout<<"Horarios: 12:00p, 12:50p, 1:40p, 3:40p, 4:30p, 6:40p, 9:40p"<<endl;
			cout<<"Duracion: 1hr 22min 1hr 46min 1 hr 30 min"<<endl;
			cout<<"Genero: Animada"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"EL PRODIGIO (2019)"<<endl;
			cout<<"Sinopsis:El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 1:05p, 3:05, 5:05p, 7:05p, 9:05p"<<endl;
			cout<<"Duracion: 2hr 2min 1hr 46min 1 hr 48 min"<<endl;
			cout<<"Genero: Terror"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 12:45p, 3:50p, 7:20p, 10:05p"<<endl;
			cout<<"Duracion: 1hr 30min 1hr 46min 1 hr 28 min "<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"STAN & OLLIE"<<endl;
			cout<<"Sinopsis: En 1953, durante una gira, la amistad de los comediantes Oliver Hardy y Stan Laurel, los legendarios el Gordo y el Flaco, comienza a resquebrajarse al mismo tiempo que la salud de Oliver se deteriora."<<endl;
			cout<<"Horarios: 4:20"<<endl;
			cout<<"Duracion: 1hr 25min 1hr 46min 1 hr 36 min"<<endl;
			cout<<"Genero: Romantica"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"GLASS (2019)"<<endl;
			cout<<"Sinopsis: El guardia de seguridad David Dunn usa sus habilidades sobrenaturales para rastrear a Kevin Wendell Crumb, un hombre perturbado que tiene veinticuatro personalidades"<<endl;
			cout<<"Horarios: 12:00p, 2:45"<<endl;
			cout<<"Duracion: 2hr 8min 1hr 46min 2 hr 2 min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"The Upside"<<endl;
			cout<<"Sinopsis: Un millonario tetrapléjico establece una amistad profunda con el criminal en libertad condicional al que contrata para cuidarlo. A pesar de que proceden de dos realidades totalmente opuestas, la amistad que surge entre ellos es limpia y férrea."<<endl;
			cout<<"Horarios: 12:00p, 2:45"<<endl;
			cout<<"Duracion: 1hr 43min 1hr 46min 1 hr 28 min"<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Vice (2018)"<<endl;
			cout<<"Sinopsis: George W. Bush, gobernador de Texas, elige como su mano derecha para las elecciones presidenciales del año 2000 a Dick Cheney, presidente ejecutivo de Halliburton Co. Esta es la historia de cómo Cheney llegó a disponer de un poder casi ilimitado."<<endl;
			cout<<"Horarios: 12:00p, 2:45"<<endl;
			cout<<"Duracion: 1hr 55min 1hr 46min 1 hr 32 min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Aquaman"<<endl;
			cout<<"Sinopsis: Aquaman debe recuperar el legendario Tridente de Atlan para salvar a la ciudad subacuática de Atlantis, y al mundo de la superficie, de su hermano hambriento de poder."<<endl;
			cout<<"Horarios: 5:20p, 8:50"<<endl;
			cout<<"Duracion: 1hr 34min 1hr 46min 1 hr 37 min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"SPIDER-MAN: INTO THE SPIDER-VERSE"<<endl;
			cout<<"Sinopsis: Spider-Man es el mentor de un adolescente de Brooklyn, Nueva York, para convertirse en el próximo superhéroe."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 45min 1hr 46min 1 hr 59 min"<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"Ralph In Breaks The Internet"<<endl;
			cout<<"Sinopsis: Después de 6 años, Ralph y Vanellope se embarcan en una nueva aventura a las profundidades de Internet para encontrar la pieza que necesitan para reparar un videojuego."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 40min 1hr 46min 1 hr 07 min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"Green Book"<<endl;
			cout<<"Sinopsis: Un pianista negro contrata a un rudo italoamericano para que sea su chofer y guardaespaldas durante una gira por el sur de los Estados Unidos en 1962, un viaje que les adentra en un territorio y una época subyugados al racismo."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 38min 1hr 46min 1 hr 52 min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"A STAR IS BORN (2018) "<<endl;
			cout<<"Sinopsis: Jackson, una estrella de la musica country con problemas de alcoholismo, descubre el talento de Ally, una joven cantante de la cual se enamora. Mientras la carrera de ella despega, Jackson percibe que sus días de gloria están llegando a su fin."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 22min 1hr 46min 1 hr 38 min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Pantera Negra "<<endl;
			cout<<"Sinopsis: Despues de morir su padre, T'Challa regresa a su nacion, Wakanda. Una vez alli, descubre que tiene un nuevo y terrible enemigo, y T'Challa asume la personalidad de Pantera Negra para salvar no solo al reino de Wakanda, sino a toda la humanidad."<<endl;
			cout<<"Horarios: 10:00p"<<endl;
			cout<<"Duracion: 2hr 25min 1hr 46min 2 hr 02 min"<<endl;
			cout<<"Genero: Accion Accion"<<endl<<endl;

            cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}
				break;
		    }

            case 4:{ system("cls");

            cout<<"\t\t\t\t\t\t4. CITY CINEMAS"<<endl<<endl;

			cout<<"____________________________________________________________"<<endl;
			cout<<"Peleando con mi familia"<<endl;
			cout<<"Sinopsis: La película está basada en la historia real de Saraya 'Paige' Bevis, una joven luchadora profesional inglesa, ya retirada, que que actualmente trabaja para la WWE."<<endl;
			cout<<"Horarios:  7:00p, 9:50p"<<endl;
			cout<<"Duracion: 1hr 48min"<<endl;
			cout<<"Genero: Drama"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Como entrenar a tu dragon: El mundo oculto"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 6:00p, 8:45p"<<endl;
			cout<<"Duracion: 1hr 44min"<<endl;
			cout<<"Genero: Animacion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Run the Race"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 7:00p, 9:40p"<<endl;
			cout<<"Duracion: 1hr 55min"<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 1:10p, 4:10p, 7:15"<<endl;
			cout<<"Duracion: 1hr 45min 1hr 46min 2 hr 2 min "<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Feliz Dia de la muerte 2U"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 12:30p, 1:30p,3:30p, 4:30p, 6:30p, 7:30p, 9:30p, 10:10p"<<endl;
			cout<<"Duracion: 2hr 30min 1hr 46min"<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una comedia romántica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  12:30p, 3:00p, 5:30p, 8:00p, 10:30p"<<endl;
			cout<<"Duracion: 1hr 28min 1hr 46min 1 hr 30 min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"Persecucion en frio"<<endl;
			cout<<"Sinopsis: El quitanieves Nelson Coxman busca venganza contra un cartel de la droga en su ciudad natal de las Montañas Rocosas después de que su hijo fue asesinado por la banda."<<endl;
			cout<<"Horarios: 1:05p, 4:15p, 7:35p, 10:30p"<<endl;
			cout<<"Duracion: 1hr 26min 1hr 46min"<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"LA PELÍCULA DE LEGO 2: LA SEGUNDA PARTE"<<endl;
			cout<<"Sinopsis: Han pasado cinco años desde que todo fue increíble y los ciudadanos se enfrentan a una gran nueva amenaza: los invasores Lego Duplo del espacio exterior, destruyendo todo más rápido de lo que pueden reconstruir. La batalla para derrotarlos y restaurar la armonía en el universo Lego llevará a Emmet, Lucy, Batman y sus amigos a mundos lejanos e inexplorados, incluida una extraña galaxia en la que todo es un musical."<<endl;
			cout<<"Horarios: 12:00p, 12:50p, 1:40p, 3:40p, 4:30p, 6:40p, 9:40p"<<endl;
			cout<<"Duracion: 1hr 22min 1hr 46min 1 hr 30 min"<<endl;
			cout<<"Genero: Animada"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"EL PRODIGIO (2019)"<<endl;
			cout<<"Sinopsis:El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 1:05p, 3:05, 5:05p, 7:05p, 9:05p"<<endl;
			cout<<"Duracion: 2hr 2min 1hr 46min 1 hr 48 min"<<endl;
			cout<<"Genero: Terror"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 12:45p, 3:50p, 7:20p, 10:05p"<<endl;
			cout<<"Duracion: 1hr 30min 1hr 46min 1 hr 28 min "<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"STAN & OLLIE"<<endl;
			cout<<"Sinopsis: En 1953, durante una gira, la amistad de los comediantes Oliver Hardy y Stan Laurel, los legendarios el Gordo y el Flaco, comienza a resquebrajarse al mismo tiempo que la salud de Oliver se deteriora."<<endl;
			cout<<"Horarios: 4:20"<<endl;
			cout<<"Duracion: 1hr 25min 1hr 46min 1 hr 36 min"<<endl;
			cout<<"Genero: Romantica"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"GLASS (2019)"<<endl;
			cout<<"Sinopsis: El guardia de seguridad David Dunn usa sus habilidades sobrenaturales para rastrear a Kevin Wendell Crumb, un hombre perturbado que tiene veinticuatro personalidades"<<endl;
			cout<<"Horarios: 12:00p, 2:45"<<endl;
			cout<<"Duracion: 2hr 8min 1hr 46min 2 hr 2 min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"The Upside"<<endl;
			cout<<"Sinopsis: Un millonario tetrapléjico establece una amistad profunda con el criminal en libertad condicional al que contrata para cuidarlo. A pesar de que proceden de dos realidades totalmente opuestas, la amistad que surge entre ellos es limpia y férrea."<<endl;
			cout<<"Horarios: 12:00p, 2:45"<<endl;
			cout<<"Duracion: 1hr 43min 1hr 46min 1 hr 28 min"<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Vice (2018)"<<endl;
			cout<<"Sinopsis: George W. Bush, gobernador de Texas, elige como su mano derecha para las elecciones presidenciales del año 2000 a Dick Cheney, presidente ejecutivo de Halliburton Co. Esta es la historia de cómo Cheney llegó a disponer de un poder casi ilimitado."<<endl;
			cout<<"Horarios: 12:00p, 2:45"<<endl;
			cout<<"Duracion: 1hr 55min 1hr 46min 1 hr 32 min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Aquaman"<<endl;
			cout<<"Sinopsis: Aquaman debe recuperar el legendario Tridente de Atlan para salvar a la ciudad subacuática de Atlantis, y al mundo de la superficie, de su hermano hambriento de poder."<<endl;
			cout<<"Horarios: 5:20p, 8:50"<<endl;
			cout<<"Duracion: 1hr 34min 1hr 46min 1 hr 37 min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"SPIDER-MAN: INTO THE SPIDER-VERSE"<<endl;
			cout<<"Sinopsis: Spider-Man es el mentor de un adolescente de Brooklyn, Nueva York, para convertirse en el próximo superhéroe."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 45min 1hr 46min 1 hr 59 min"<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"Ralph In Breaks The Internet"<<endl;
			cout<<"Sinopsis: Después de 6 años, Ralph y Vanellope se embarcan en una nueva aventura a las profundidades de Internet para encontrar la pieza que necesitan para reparar un videojuego."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 40min 1hr 46min 1 hr 07 min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"Green Book"<<endl;
			cout<<"Sinopsis: Un pianista negro contrata a un rudo italoamericano para que sea su chofer y guardaespaldas durante una gira por el sur de los Estados Unidos en 1962, un viaje que les adentra en un territorio y una época subyugados al racismo."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 38min 1hr 46min 1 hr 52 min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"A STAR IS BORN (2018) "<<endl;
			cout<<"Sinopsis: Jackson, una estrella de la musica country con problemas de alcoholismo, descubre el talento de Ally, una joven cantante de la cual se enamora. Mientras la carrera de ella despega, Jackson percibe que sus días de gloria están llegando a su fin."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 22min 1hr 46min 1 hr 38 min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Pantera Negra "<<endl;
			cout<<"Sinopsis: Despues de morir su padre, T'Challa regresa a su nacion, Wakanda. Una vez alli, descubre que tiene un nuevo y terrible enemigo, y T'Challa asume la personalidad de Pantera Negra para salvar no solo al reino de Wakanda, sino a toda la humanidad."<<endl;
			cout<<"Horarios: 10:00p"<<endl;
			cout<<"Duracion: 2hr 25min 1hr 46min 2 hr 02 min"<<endl;
			cout<<"Genero: Accion Accion"<<endl<<endl;

            cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}
				break;
		    }

            case 5:{ system("cls");

            cout<<"\t\t\t\t\t\t5. ROXY CINEMA"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ESCAPE ROOM (2019)"<<endl;
			cout<<"Sinopsis: Seis extraños se encuentran en circunstancias fuera de su control, y deben usar su ingenio para sobrevivir."<<endl;
			cout<<"Horarios: 4:30p"<<endl;
            cout<<"Duracion: 1hr 30min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"BUMBLEBEE"<<endl;
			cout<<"Sinopsis: A la carrera en el año 1987, Bumblebee the Autobot encuentra refugio en un deposito de chatarra en una pequeña ciudad costera de California. Cuando Charlie, de 17 años, lo revive, rapidamente se entera de que no es un Volkswagen amarillo comun."<<endl;
			cout<<"Horarios: 1:30p, 7:15p"<<endl;
            cout<<"Duracion: 1hr 45min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"SPIDER-MAN: INTO THE SPIDER-VERSE"<<endl;
			cout<<"Sinopsis: Spider-Man es el mentor de un adolescente de Brooklyn, Nueva York, para convertirse en el proximo superheroe."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
            cout<<"Duracion: 1hr 22min"<<endl;
			cout<<"Genero: Fantasia"<<endl<<endl;

			cout<<"____________________________________________________________"<<endl;
			cout<<"THE FAVOURITE"<<endl;
			cout<<"Sinopsis: A principios del s. XVIII, Inglaterra está en guerra con Francia y la enfermiza reina Anne delega sus responsabilidades en su amiga Lady Sarah."<<endl;
			cout<<"Horarios: 1:00p, 3:45p, 6:30"<<endl;
            cout<<"Duracion: 1hr 25min"<<endl;
			cout<<"Genero: Drama"<<endl<<endl;

			cout<<"____________________________________________________________"<<endl;
			cout<<"Green Book"<<endl;
			cout<<"Sinopsis: Un pianista negro contrata a un rudo italoamericano para que sea su chofer y guardaespaldas durante una gira por el sur de los Estados Unidos en 1962, un viaje que les adentra en un territorio y una época subyugados al racismo."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 55min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;

            cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}
				break;
		    }

         	case 6:{ system("cls");

            cout<<"\t\t\t\t\t\t6. EAST 86TH ST. CINEMA"<<endl<<endl;

			cout<<"____________________________________________________________"<<endl;
			cout<<"Peleando con mi familia"<<endl;
			cout<<"Sinopsis: La película está basada en la historia real de Saraya 'Paige' Bevis, una joven luchadora profesional inglesa, ya retirada, que que actualmente trabaja para la WWE."<<endl;
			cout<<"Horarios:  7:00p, 9:50p"<<endl;
			cout<<"Duracion: 1hr 48min"<<endl;
			cout<<"Genero: Drama"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Como entrenar a tu dragon: El mundo oculto"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 6:00p, 8:45p"<<endl;
			cout<<"Duracion: 1hr 44min"<<endl;
			cout<<"Genero: Animacion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Run the Race"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 7:00p, 9:40p"<<endl;
			cout<<"Duracion: 1hr 55min"<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 1:10p, 4:10p, 7:15"<<endl;
			cout<<"Duracion: 1hr 45min 1hr 46min 2 hr 2 min "<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Feliz Dia de la muerte 2U"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 12:30p, 1:30p,3:30p, 4:30p, 6:30p, 7:30p, 9:30p, 10:10p"<<endl;
			cout<<"Duracion: 2hr 30min 1hr 46min"<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una comedia romántica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  12:30p, 3:00p, 5:30p, 8:00p, 10:30p"<<endl;
			cout<<"Duracion: 1hr 28min 1hr 46min 1 hr 30 min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"Persecucion en frio"<<endl;
			cout<<"Sinopsis: El quitanieves Nelson Coxman busca venganza contra un cartel de la droga en su ciudad natal de las Montañas Rocosas después de que su hijo fue asesinado por la banda."<<endl;
			cout<<"Horarios: 1:05p, 4:15p, 7:35p, 10:30p"<<endl;
			cout<<"Duracion: 1hr 26min 1hr 46min"<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"LA PELÍCULA DE LEGO 2: LA SEGUNDA PARTE"<<endl;
			cout<<"Sinopsis: Han pasado cinco años desde que todo fue increíble y los ciudadanos se enfrentan a una gran nueva amenaza: los invasores Lego Duplo del espacio exterior, destruyendo todo más rápido de lo que pueden reconstruir. La batalla para derrotarlos y restaurar la armonía en el universo Lego llevará a Emmet, Lucy, Batman y sus amigos a mundos lejanos e inexplorados, incluida una extraña galaxia en la que todo es un musical."<<endl;
			cout<<"Horarios: 12:00p, 12:50p, 1:40p, 3:40p, 4:30p, 6:40p, 9:40p"<<endl;
			cout<<"Duracion: 1hr 22min 1hr 46min 1 hr 30 min"<<endl;
			cout<<"Genero: Animada"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"EL PRODIGIO (2019)"<<endl;
			cout<<"Sinopsis:El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 1:05p, 3:05, 5:05p, 7:05p, 9:05p"<<endl;
			cout<<"Duracion: 2hr 2min 1hr 46min 1 hr 48 min"<<endl;
			cout<<"Genero: Terror"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 12:45p, 3:50p, 7:20p, 10:05p"<<endl;
			cout<<"Duracion: 1hr 30min 1hr 46min 1 hr 28 min "<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"STAN & OLLIE"<<endl;
			cout<<"Sinopsis: En 1953, durante una gira, la amistad de los comediantes Oliver Hardy y Stan Laurel, los legendarios el Gordo y el Flaco, comienza a resquebrajarse al mismo tiempo que la salud de Oliver se deteriora."<<endl;
			cout<<"Horarios: 4:20"<<endl;
			cout<<"Duracion: 1hr 25min 1hr 46min 1 hr 36 min"<<endl;
			cout<<"Genero: Romantica"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"GLASS (2019)"<<endl;
			cout<<"Sinopsis: El guardia de seguridad David Dunn usa sus habilidades sobrenaturales para rastrear a Kevin Wendell Crumb, un hombre perturbado que tiene veinticuatro personalidades"<<endl;
			cout<<"Horarios: 12:00p, 2:45"<<endl;
			cout<<"Duracion: 2hr 8min 1hr 46min 2 hr 2 min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"The Upside"<<endl;
			cout<<"Sinopsis: Un millonario tetrapléjico establece una amistad profunda con el criminal en libertad condicional al que contrata para cuidarlo. A pesar de que proceden de dos realidades totalmente opuestas, la amistad que surge entre ellos es limpia y férrea."<<endl;
			cout<<"Horarios: 12:00p, 2:45"<<endl;
			cout<<"Duracion: 1hr 43min 1hr 46min 1 hr 28 min"<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Vice (2018)"<<endl;
			cout<<"Sinopsis: George W. Bush, gobernador de Texas, elige como su mano derecha para las elecciones presidenciales del año 2000 a Dick Cheney, presidente ejecutivo de Halliburton Co. Esta es la historia de cómo Cheney llegó a disponer de un poder casi ilimitado."<<endl;
			cout<<"Horarios: 12:00p, 2:45"<<endl;
			cout<<"Duracion: 1hr 55min 1hr 46min 1 hr 32 min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Aquaman"<<endl;
			cout<<"Sinopsis: Aquaman debe recuperar el legendario Tridente de Atlan para salvar a la ciudad subacuática de Atlantis, y al mundo de la superficie, de su hermano hambriento de poder."<<endl;
			cout<<"Horarios: 5:20p, 8:50"<<endl;
			cout<<"Duracion: 1hr 34min 1hr 46min 1 hr 37 min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"SPIDER-MAN: INTO THE SPIDER-VERSE"<<endl;
			cout<<"Sinopsis: Spider-Man es el mentor de un adolescente de Brooklyn, Nueva York, para convertirse en el próximo superhéroe."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 45min 1hr 46min 1 hr 59 min"<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"Ralph In Breaks The Internet"<<endl;
			cout<<"Sinopsis: Después de 6 años, Ralph y Vanellope se embarcan en una nueva aventura a las profundidades de Internet para encontrar la pieza que necesitan para reparar un videojuego."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 40min 1hr 46min 1 hr 07 min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"Green Book"<<endl;
			cout<<"Sinopsis: Un pianista negro contrata a un rudo italoamericano para que sea su chofer y guardaespaldas durante una gira por el sur de los Estados Unidos en 1962, un viaje que les adentra en un territorio y una época subyugados al racismo."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 38min 1hr 46min 1 hr 52 min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"A STAR IS BORN (2018) "<<endl;
			cout<<"Sinopsis: Jackson, una estrella de la musica country con problemas de alcoholismo, descubre el talento de Ally, una joven cantante de la cual se enamora. Mientras la carrera de ella despega, Jackson percibe que sus días de gloria están llegando a su fin."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 22min 1hr 46min 1 hr 38 min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Pantera Negra "<<endl;
			cout<<"Sinopsis: Despues de morir su padre, T'Challa regresa a su nacion, Wakanda. Una vez alli, descubre que tiene un nuevo y terrible enemigo, y T'Challa asume la personalidad de Pantera Negra para salvar no solo al reino de Wakanda, sino a toda la humanidad."<<endl;
			cout<<"Horarios: 10:00p"<<endl;
			cout<<"Duracion: 2hr 25min 1hr 46min 2 hr 02 min"<<endl;
			cout<<"Genero: Accion Accion"<<endl<<endl;


            cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}
				break;
		    }

            case 7:{ system("cls");

            cout<<"\t\t\t\t\t\t7. REGAL CINEMA BATTERY PARK 11"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ESCAPE ROOM (2019)"<<endl;
			cout<<"Sinopsis: Seis extraños se encuentran en circunstancias fuera de su control, y deben usar su ingenio para sobrevivir."<<endl;
			cout<<"Horarios: 4:30p"<<endl;
            cout<<"Duracion: 1hr 30min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"BUMBLEBEE"<<endl;
			cout<<"Sinopsis: A la carrera en el año 1987, Bumblebee the Autobot encuentra refugio en un deposito de chatarra en una pequeña ciudad costera de California. Cuando Charlie, de 17 años, lo revive, rapidamente se entera de que no es un Volkswagen amarillo comun."<<endl;
			cout<<"Horarios: 1:30p, 7:15p"<<endl;
            cout<<"Duracion: 1hr 45min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"SPIDER-MAN: INTO THE SPIDER-VERSE"<<endl;
			cout<<"Sinopsis: Spider-Man es el mentor de un adolescente de Brooklyn, Nueva York, para convertirse en el proximo superheroe."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
            cout<<"Duracion: 1hr 22min"<<endl;
			cout<<"Genero: Fantasia"<<endl<<endl;

			cout<<"____________________________________________________________"<<endl;
			cout<<"THE FAVOURITE"<<endl;
			cout<<"Sinopsis: A principios del s. XVIII, Inglaterra está en guerra con Francia y la enfermiza reina Anne delega sus responsabilidades en su amiga Lady Sarah."<<endl;
			cout<<"Horarios: 1:00p, 3:45p, 6:30"<<endl;
            cout<<"Duracion: 1hr 25min"<<endl;
			cout<<"Genero: Drama"<<endl<<endl;

			cout<<"____________________________________________________________"<<endl;
			cout<<"Green Book"<<endl;
			cout<<"Sinopsis: Un pianista negro contrata a un rudo italoamericano para que sea su chofer y guardaespaldas durante una gira por el sur de los Estados Unidos en 1962, un viaje que les adentra en un territorio y una época subyugados al racismo."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 55min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;

            cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}
				break;
		    }

		    case 8:{ system("cls");

            cout<<"\t\t\t\t\t\t8. AMC LINCOLN SQUARE 13"<<endl<<endl;

			cout<<"____________________________________________________________"<<endl;
			cout<<"Peleando con mi familia"<<endl;
			cout<<"Sinopsis: La película está basada en la historia real de Saraya 'Paige' Bevis, una joven luchadora profesional inglesa, ya retirada, que que actualmente trabaja para la WWE."<<endl;
			cout<<"Horarios:  7:00p, 9:50p"<<endl;
			cout<<"Duracion: 1hr 48min"<<endl;
			cout<<"Genero: Drama"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Como entrenar a tu dragon: El mundo oculto"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 6:00p, 8:45p"<<endl;
			cout<<"Duracion: 1hr 44min"<<endl;
			cout<<"Genero: Animacion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Run the Race"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 7:00p, 9:40p"<<endl;
			cout<<"Duracion: 1hr 55min"<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 1:10p, 4:10p, 7:15"<<endl;
			cout<<"Duracion: 1hr 45min 1hr 46min 2 hr 2 min "<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Feliz Dia de la muerte 2U"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 12:30p, 1:30p,3:30p, 4:30p, 6:30p, 7:30p, 9:30p, 10:10p"<<endl;
			cout<<"Duracion: 2hr 30min 1hr 46min"<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una comedia romántica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  12:30p, 3:00p, 5:30p, 8:00p, 10:30p"<<endl;
			cout<<"Duracion: 1hr 28min 1hr 46min 1 hr 30 min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"Persecucion en frio"<<endl;
			cout<<"Sinopsis: El quitanieves Nelson Coxman busca venganza contra un cartel de la droga en su ciudad natal de las Montañas Rocosas después de que su hijo fue asesinado por la banda."<<endl;
			cout<<"Horarios: 1:05p, 4:15p, 7:35p, 10:30p"<<endl;
			cout<<"Duracion: 1hr 26min 1hr 46min"<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"LA PELÍCULA DE LEGO 2: LA SEGUNDA PARTE"<<endl;
			cout<<"Sinopsis: Han pasado cinco años desde que todo fue increíble y los ciudadanos se enfrentan a una gran nueva amenaza: los invasores Lego Duplo del espacio exterior, destruyendo todo más rápido de lo que pueden reconstruir. La batalla para derrotarlos y restaurar la armonía en el universo Lego llevará a Emmet, Lucy, Batman y sus amigos a mundos lejanos e inexplorados, incluida una extraña galaxia en la que todo es un musical."<<endl;
			cout<<"Horarios: 12:00p, 12:50p, 1:40p, 3:40p, 4:30p, 6:40p, 9:40p"<<endl;
			cout<<"Duracion: 1hr 22min 1hr 46min 1 hr 30 min"<<endl;
			cout<<"Genero: Animada"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"EL PRODIGIO (2019)"<<endl;
			cout<<"Sinopsis:El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 1:05p, 3:05, 5:05p, 7:05p, 9:05p"<<endl;
			cout<<"Duracion: 2hr 2min 1hr 46min 1 hr 48 min"<<endl;
			cout<<"Genero: Terror"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 12:45p, 3:50p, 7:20p, 10:05p"<<endl;
			cout<<"Duracion: 1hr 30min 1hr 46min 1 hr 28 min "<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"STAN & OLLIE"<<endl;
			cout<<"Sinopsis: En 1953, durante una gira, la amistad de los comediantes Oliver Hardy y Stan Laurel, los legendarios el Gordo y el Flaco, comienza a resquebrajarse al mismo tiempo que la salud de Oliver se deteriora."<<endl;
			cout<<"Horarios: 4:20"<<endl;
			cout<<"Duracion: 1hr 25min 1hr 46min 1 hr 36 min"<<endl;
			cout<<"Genero: Romantica"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"GLASS (2019)"<<endl;
			cout<<"Sinopsis: El guardia de seguridad David Dunn usa sus habilidades sobrenaturales para rastrear a Kevin Wendell Crumb, un hombre perturbado que tiene veinticuatro personalidades"<<endl;
			cout<<"Horarios: 12:00p, 2:45"<<endl;
			cout<<"Duracion: 2hr 8min 1hr 46min 2 hr 2 min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"The Upside"<<endl;
			cout<<"Sinopsis: Un millonario tetrapléjico establece una amistad profunda con el criminal en libertad condicional al que contrata para cuidarlo. A pesar de que proceden de dos realidades totalmente opuestas, la amistad que surge entre ellos es limpia y férrea."<<endl;
			cout<<"Horarios: 12:00p, 2:45"<<endl;
			cout<<"Duracion: 1hr 43min 1hr 46min 1 hr 28 min"<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Vice (2018)"<<endl;
			cout<<"Sinopsis: George W. Bush, gobernador de Texas, elige como su mano derecha para las elecciones presidenciales del año 2000 a Dick Cheney, presidente ejecutivo de Halliburton Co. Esta es la historia de cómo Cheney llegó a disponer de un poder casi ilimitado."<<endl;
			cout<<"Horarios: 12:00p, 2:45"<<endl;
			cout<<"Duracion: 1hr 55min 1hr 46min 1 hr 32 min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Aquaman"<<endl;
			cout<<"Sinopsis: Aquaman debe recuperar el legendario Tridente de Atlan para salvar a la ciudad subacuática de Atlantis, y al mundo de la superficie, de su hermano hambriento de poder."<<endl;
			cout<<"Horarios: 5:20p, 8:50"<<endl;
			cout<<"Duracion: 1hr 34min 1hr 46min 1 hr 37 min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"SPIDER-MAN: INTO THE SPIDER-VERSE"<<endl;
			cout<<"Sinopsis: Spider-Man es el mentor de un adolescente de Brooklyn, Nueva York, para convertirse en el próximo superhéroe."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 45min 1hr 46min 1 hr 59 min"<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"Ralph In Breaks The Internet"<<endl;
			cout<<"Sinopsis: Después de 6 años, Ralph y Vanellope se embarcan en una nueva aventura a las profundidades de Internet para encontrar la pieza que necesitan para reparar un videojuego."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 40min 1hr 46min 1 hr 07 min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"Green Book"<<endl;
			cout<<"Sinopsis: Un pianista negro contrata a un rudo italoamericano para que sea su chofer y guardaespaldas durante una gira por el sur de los Estados Unidos en 1962, un viaje que les adentra en un territorio y una época subyugados al racismo."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 38min 1hr 46min 1 hr 52 min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"A STAR IS BORN (2018) "<<endl;
			cout<<"Sinopsis: Jackson, una estrella de la musica country con problemas de alcoholismo, descubre el talento de Ally, una joven cantante de la cual se enamora. Mientras la carrera de ella despega, Jackson percibe que sus días de gloria están llegando a su fin."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 22min 1hr 46min 1 hr 38 min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Pantera Negra "<<endl;
			cout<<"Sinopsis: Despues de morir su padre, T'Challa regresa a su nacion, Wakanda. Una vez alli, descubre que tiene un nuevo y terrible enemigo, y T'Challa asume la personalidad de Pantera Negra para salvar no solo al reino de Wakanda, sino a toda la humanidad."<<endl;
			cout<<"Horarios: 10:00p"<<endl;
			cout<<"Duracion: 2hr 25min 1hr 46min 2 hr 02 min"<<endl;
			cout<<"Genero: Accion Accion"<<endl<<endl;

            cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}
				break;
		    }

		    case 9:{ system("cls");

            cout<<"\t\t\t\t\t\t9. CINEMAS 1, 2 Y 3"<<endl<<endl;

			cout<<"____________________________________________________________"<<endl;
			cout<<"Peleando con mi familia"<<endl;
			cout<<"Sinopsis: La película está basada en la historia real de Saraya 'Paige' Bevis, una joven luchadora profesional inglesa, ya retirada, que que actualmente trabaja para la WWE."<<endl;
			cout<<"Horarios:  7:00p, 9:50p"<<endl;
			cout<<"Duracion: 1hr 48min"<<endl;
			cout<<"Genero: Drama"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Como entrenar a tu dragon: El mundo oculto"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 6:00p, 8:45p"<<endl;
			cout<<"Duracion: 1hr 44min"<<endl;
			cout<<"Genero: Animacion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Run the Race"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 7:00p, 9:40p"<<endl;
			cout<<"Duracion: 1hr 55min"<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 1:10p, 4:10p, 7:15"<<endl;
			cout<<"Duracion: 1hr 45min 1hr 46min 2 hr 2 min "<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Feliz Dia de la muerte 2U"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 12:30p, 1:30p,3:30p, 4:30p, 6:30p, 7:30p, 9:30p, 10:10p"<<endl;
			cout<<"Duracion: 2hr 30min 1hr 46min"<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una comedia romántica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  12:30p, 3:00p, 5:30p, 8:00p, 10:30p"<<endl;
			cout<<"Duracion: 1hr 28min 1hr 46min 1 hr 30 min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"Persecucion en frio"<<endl;
			cout<<"Sinopsis: El quitanieves Nelson Coxman busca venganza contra un cartel de la droga en su ciudad natal de las Montañas Rocosas después de que su hijo fue asesinado por la banda."<<endl;
			cout<<"Horarios: 1:05p, 4:15p, 7:35p, 10:30p"<<endl;
			cout<<"Duracion: 1hr 26min 1hr 46min"<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"LA PELÍCULA DE LEGO 2: LA SEGUNDA PARTE"<<endl;
			cout<<"Sinopsis: Han pasado cinco años desde que todo fue increíble y los ciudadanos se enfrentan a una gran nueva amenaza: los invasores Lego Duplo del espacio exterior, destruyendo todo más rápido de lo que pueden reconstruir. La batalla para derrotarlos y restaurar la armonía en el universo Lego llevará a Emmet, Lucy, Batman y sus amigos a mundos lejanos e inexplorados, incluida una extraña galaxia en la que todo es un musical."<<endl;
			cout<<"Horarios: 12:00p, 12:50p, 1:40p, 3:40p, 4:30p, 6:40p, 9:40p"<<endl;
			cout<<"Duracion: 1hr 22min 1hr 46min 1 hr 30 min"<<endl;
			cout<<"Genero: Animada"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"EL PRODIGIO (2019)"<<endl;
			cout<<"Sinopsis:El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 1:05p, 3:05, 5:05p, 7:05p, 9:05p"<<endl;
			cout<<"Duracion: 2hr 2min 1hr 46min 1 hr 48 min"<<endl;
			cout<<"Genero: Terror"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 12:45p, 3:50p, 7:20p, 10:05p"<<endl;
			cout<<"Duracion: 1hr 30min 1hr 46min 1 hr 28 min "<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"STAN & OLLIE"<<endl;
			cout<<"Sinopsis: En 1953, durante una gira, la amistad de los comediantes Oliver Hardy y Stan Laurel, los legendarios el Gordo y el Flaco, comienza a resquebrajarse al mismo tiempo que la salud de Oliver se deteriora."<<endl;
			cout<<"Horarios: 4:20"<<endl;
			cout<<"Duracion: 1hr 25min 1hr 46min 1 hr 36 min"<<endl;
			cout<<"Genero: Romantica"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"GLASS (2019)"<<endl;
			cout<<"Sinopsis: El guardia de seguridad David Dunn usa sus habilidades sobrenaturales para rastrear a Kevin Wendell Crumb, un hombre perturbado que tiene veinticuatro personalidades"<<endl;
			cout<<"Horarios: 12:00p, 2:45"<<endl;
			cout<<"Duracion: 2hr 8min 1hr 46min 2 hr 2 min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"The Upside"<<endl;
			cout<<"Sinopsis: Un millonario tetrapléjico establece una amistad profunda con el criminal en libertad condicional al que contrata para cuidarlo. A pesar de que proceden de dos realidades totalmente opuestas, la amistad que surge entre ellos es limpia y férrea."<<endl;
			cout<<"Horarios: 12:00p, 2:45"<<endl;
			cout<<"Duracion: 1hr 43min 1hr 46min 1 hr 28 min"<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Vice (2018)"<<endl;
			cout<<"Sinopsis: George W. Bush, gobernador de Texas, elige como su mano derecha para las elecciones presidenciales del año 2000 a Dick Cheney, presidente ejecutivo de Halliburton Co. Esta es la historia de cómo Cheney llegó a disponer de un poder casi ilimitado."<<endl;
			cout<<"Horarios: 12:00p, 2:45"<<endl;
			cout<<"Duracion: 1hr 55min 1hr 46min 1 hr 32 min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Aquaman"<<endl;
			cout<<"Sinopsis: Aquaman debe recuperar el legendario Tridente de Atlan para salvar a la ciudad subacuática de Atlantis, y al mundo de la superficie, de su hermano hambriento de poder."<<endl;
			cout<<"Horarios: 5:20p, 8:50"<<endl;
			cout<<"Duracion: 1hr 34min 1hr 46min 1 hr 37 min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"SPIDER-MAN: INTO THE SPIDER-VERSE"<<endl;
			cout<<"Sinopsis: Spider-Man es el mentor de un adolescente de Brooklyn, Nueva York, para convertirse en el próximo superhéroe."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 45min 1hr 46min 1 hr 59 min"<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"Ralph In Breaks The Internet"<<endl;
			cout<<"Sinopsis: Después de 6 años, Ralph y Vanellope se embarcan en una nueva aventura a las profundidades de Internet para encontrar la pieza que necesitan para reparar un videojuego."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 40min 1hr 46min 1 hr 07 min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"Green Book"<<endl;
			cout<<"Sinopsis: Un pianista negro contrata a un rudo italoamericano para que sea su chofer y guardaespaldas durante una gira por el sur de los Estados Unidos en 1962, un viaje que les adentra en un territorio y una época subyugados al racismo."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 38min 1hr 46min 1 hr 52 min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"A STAR IS BORN (2018) "<<endl;
			cout<<"Sinopsis: Jackson, una estrella de la musica country con problemas de alcoholismo, descubre el talento de Ally, una joven cantante de la cual se enamora. Mientras la carrera de ella despega, Jackson percibe que sus días de gloria están llegando a su fin."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 22min 1hr 46min 1 hr 38 min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Pantera Negra "<<endl;
			cout<<"Sinopsis: Despues de morir su padre, T'Challa regresa a su nacion, Wakanda. Una vez alli, descubre que tiene un nuevo y terrible enemigo, y T'Challa asume la personalidad de Pantera Negra para salvar no solo al reino de Wakanda, sino a toda la humanidad."<<endl;
			cout<<"Horarios: 10:00p"<<endl;
			cout<<"Duracion: 2hr 25min 1hr 46min 2 hr 02 min"<<endl;
			cout<<"Genero: Accion Accion"<<endl<<endl;

            cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}
				break;
		    }

            case 10:{ system("cls");

            cout<<"\t\t\t\t\t\t10. REGAL CINEMAS E-WALK 13 Y RPX"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ESCAPE ROOM (2019)"<<endl;
			cout<<"Sinopsis: Seis extraños se encuentran en circunstancias fuera de su control, y deben usar su ingenio para sobrevivir."<<endl;
			cout<<"Horarios: 4:30p"<<endl;
            cout<<"Duracion: 1hr 30min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"BUMBLEBEE"<<endl;
			cout<<"Sinopsis: A la carrera en el año 1987, Bumblebee the Autobot encuentra refugio en un deposito de chatarra en una pequeña ciudad costera de California. Cuando Charlie, de 17 años, lo revive, rapidamente se entera de que no es un Volkswagen amarillo comun."<<endl;
			cout<<"Horarios: 1:30p, 7:15p"<<endl;
            cout<<"Duracion: 1hr 45min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"SPIDER-MAN: INTO THE SPIDER-VERSE"<<endl;
			cout<<"Sinopsis: Spider-Man es el mentor de un adolescente de Brooklyn, Nueva York, para convertirse en el proximo superheroe."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
            cout<<"Duracion: 1hr 22min"<<endl;
			cout<<"Genero: Fantasia"<<endl<<endl;

			cout<<"____________________________________________________________"<<endl;
			cout<<"THE FAVOURITE"<<endl;
			cout<<"Sinopsis: A principios del s. XVIII, Inglaterra está en guerra con Francia y la enfermiza reina Anne delega sus responsabilidades en su amiga Lady Sarah."<<endl;
			cout<<"Horarios: 1:00p, 3:45p, 6:30"<<endl;
            cout<<"Duracion: 1hr 25min"<<endl;
			cout<<"Genero: Drama"<<endl<<endl;

			cout<<"____________________________________________________________"<<endl;
			cout<<"Green Book"<<endl;
			cout<<"Sinopsis: Un pianista negro contrata a un rudo italoamericano para que sea su chofer y guardaespaldas durante una gira por el sur de los Estados Unidos en 1962, un viaje que les adentra en un territorio y una época subyugados al racismo."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 55min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;

            cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}
				break;
		    }

             case 11:{ system("cls");

            cout<<"\t\t\t\t\t\t11. CINEMA VILLAGE"<<endl<<endl;

			cout<<"____________________________________________________________"<<endl;
			cout<<"Peleando con mi familia"<<endl;
			cout<<"Sinopsis: La película esta basada en la historia real de Saraya 'Paige' Bevis, una joven luchadora profesional inglesa, ya retirada, que que actualmente trabaja para la WWE."<<endl;
			cout<<"Horarios:  7:00p, 9:50p"<<endl;
			cout<<"Duracion: 1hr 48min"<<endl;
			cout<<"Genero: Drama"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Como entrenar a tu dragon: El mundo oculto"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 6:00p, 8:45p"<<endl;
			cout<<"Duracion: 1hr 44min"<<endl;
			cout<<"Genero: Animacion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Run the Race"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 7:00p, 9:40p"<<endl;
			cout<<"Duracion: 1hr 55min"<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 1:10p, 4:10p, 7:15"<<endl;
			cout<<"Duracion: 1hr 45min 1hr 46min 2 hr 2 min "<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Feliz Dia de la muerte 2U"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 12:30p, 1:30p,3:30p, 4:30p, 6:30p, 7:30p, 9:30p, 10:10p"<<endl;
			cout<<"Duracion: 2hr 30min 1hr 46min"<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una comedia romántica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  12:30p, 3:00p, 5:30p, 8:00p, 10:30p"<<endl;
			cout<<"Duracion: 1hr 28min 1hr 46min 1 hr 30 min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"Persecucion en frio"<<endl;
			cout<<"Sinopsis: El quitanieves Nelson Coxman busca venganza contra un cartel de la droga en su ciudad natal de las Montañas Rocosas después de que su hijo fue asesinado por la banda."<<endl;
			cout<<"Horarios: 1:05p, 4:15p, 7:35p, 10:30p"<<endl;
			cout<<"Duracion: 1hr 26min 1hr 46min"<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"LA PELÍCULA DE LEGO 2: LA SEGUNDA PARTE"<<endl;
			cout<<"Sinopsis: Han pasado cinco años desde que todo fue increíble y los ciudadanos se enfrentan a una gran nueva amenaza: los invasores Lego Duplo del espacio exterior, destruyendo todo más rápido de lo que pueden reconstruir. La batalla para derrotarlos y restaurar la armonía en el universo Lego llevará a Emmet, Lucy, Batman y sus amigos a mundos lejanos e inexplorados, incluida una extraña galaxia en la que todo es un musical."<<endl;
			cout<<"Horarios: 12:00p, 12:50p, 1:40p, 3:40p, 4:30p, 6:40p, 9:40p"<<endl;
			cout<<"Duracion: 1hr 22min 1hr 46min 1 hr 30 min"<<endl;
			cout<<"Genero: Animada"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"EL PRODIGIO (2019)"<<endl;
			cout<<"Sinopsis:El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 1:05p, 3:05, 5:05p, 7:05p, 9:05p"<<endl;
			cout<<"Duracion: 2hr 2min 1hr 46min 1 hr 48 min"<<endl;
			cout<<"Genero: Terror"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 12:45p, 3:50p, 7:20p, 10:05p"<<endl;
			cout<<"Duracion: 1hr 30min 1hr 46min 1 hr 28 min "<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"STAN & OLLIE"<<endl;
			cout<<"Sinopsis: En 1953, durante una gira, la amistad de los comediantes Oliver Hardy y Stan Laurel, los legendarios el Gordo y el Flaco, comienza a resquebrajarse al mismo tiempo que la salud de Oliver se deteriora."<<endl;
			cout<<"Horarios: 4:20"<<endl;
			cout<<"Duracion: 1hr 25min 1hr 46min 1 hr 36 min"<<endl;
			cout<<"Genero: Romantica"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"GLASS (2019)"<<endl;
			cout<<"Sinopsis: El guardia de seguridad David Dunn usa sus habilidades sobrenaturales para rastrear a Kevin Wendell Crumb, un hombre perturbado que tiene veinticuatro personalidades"<<endl;
			cout<<"Horarios: 12:00p, 2:45"<<endl;
			cout<<"Duracion: 2hr 8min 1hr 46min 2 hr 2 min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"The Upside"<<endl;
			cout<<"Sinopsis: Un millonario tetrapléjico establece una amistad profunda con el criminal en libertad condicional al que contrata para cuidarlo. A pesar de que proceden de dos realidades totalmente opuestas, la amistad que surge entre ellos es limpia y férrea."<<endl;
			cout<<"Horarios: 12:00p, 2:45"<<endl;
			cout<<"Duracion: 1hr 43min 1hr 46min 1 hr 28 min"<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Vice (2018)"<<endl;
			cout<<"Sinopsis: George W. Bush, gobernador de Texas, elige como su mano derecha para las elecciones presidenciales del año 2000 a Dick Cheney, presidente ejecutivo de Halliburton Co. Esta es la historia de cómo Cheney llegó a disponer de un poder casi ilimitado."<<endl;
			cout<<"Horarios: 12:00p, 2:45"<<endl;
			cout<<"Duracion: 1hr 55min 1hr 46min 1 hr 32 min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Aquaman"<<endl;
			cout<<"Sinopsis: Aquaman debe recuperar el legendario Tridente de Atlan para salvar a la ciudad subacuática de Atlantis, y al mundo de la superficie, de su hermano hambriento de poder."<<endl;
			cout<<"Horarios: 5:20p, 8:50"<<endl;
			cout<<"Duracion: 1hr 34min 1hr 46min 1 hr 37 min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"SPIDER-MAN: INTO THE SPIDER-VERSE"<<endl;
			cout<<"Sinopsis: Spider-Man es el mentor de un adolescente de Brooklyn, Nueva York, para convertirse en el próximo superhéroe."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 45min 1hr 46min 1 hr 59 min"<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"Ralph In Breaks The Internet"<<endl;
			cout<<"Sinopsis: Después de 6 años, Ralph y Vanellope se embarcan en una nueva aventura a las profundidades de Internet para encontrar la pieza que necesitan para reparar un videojuego."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 40min 1hr 46min 1 hr 07 min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"Green Book"<<endl;
			cout<<"Sinopsis: Un pianista negro contrata a un rudo italoamericano para que sea su chofer y guardaespaldas durante una gira por el sur de los Estados Unidos en 1962, un viaje que les adentra en un territorio y una época subyugados al racismo."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 38min 1hr 46min 1 hr 52 min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"A STAR IS BORN (2018) "<<endl;
			cout<<"Sinopsis: Jackson, una estrella de la musica country con problemas de alcoholismo, descubre el talento de Ally, una joven cantante de la cual se enamora. Mientras la carrera de ella despega, Jackson percibe que sus días de gloria están llegando a su fin."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 22min 1hr 46min 1 hr 38 min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Pantera Negra "<<endl;
			cout<<"Sinopsis: Despues de morir su padre, T'Challa regresa a su nacion, Wakanda. Una vez alli, descubre que tiene un nuevo y terrible enemigo, y T'Challa asume la personalidad de Pantera Negra para salvar no solo al reino de Wakanda, sino a toda la humanidad."<<endl;
			cout<<"Horarios: 10:00p"<<endl;
			cout<<"Duracion: 2hr 25min 1hr 46min 2 hr 02 min"<<endl;
			cout<<"Genero: Accion Accion"<<endl<<endl;


            cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}
				break;
		    }

		     case 12:{ system("cls");

            cout<<"\t\t\t\t\t\t12. IPIC THEATHERS"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ESCAPE ROOM (2019)"<<endl;
			cout<<"Sinopsis: Seis extraños se encuentran en circunstancias fuera de su control, y deben usar su ingenio para sobrevivir."<<endl;
			cout<<"Horarios: 4:30p"<<endl;
            cout<<"Duracion: 1hr 30min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"BUMBLEBEE"<<endl;
			cout<<"Sinopsis: A la carrera en el año 1987, Bumblebee the Autobot encuentra refugio en un deposito de chatarra en una pequeña ciudad costera de California. Cuando Charlie, de 17 años, lo revive, rapidamente se entera de que no es un Volkswagen amarillo comun."<<endl;
			cout<<"Horarios: 1:30p, 7:15p"<<endl;
            cout<<"Duracion: 1hr 45min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"SPIDER-MAN: INTO THE SPIDER-VERSE"<<endl;
			cout<<"Sinopsis: Spider-Man es el mentor de un adolescente de Brooklyn, Nueva York, para convertirse en el proximo superheroe."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
            cout<<"Duracion: 1hr 22min"<<endl;
			cout<<"Genero: Fantasia"<<endl<<endl;

			cout<<"____________________________________________________________"<<endl;
			cout<<"THE FAVOURITE"<<endl;
			cout<<"Sinopsis: A principios del s. XVIII, Inglaterra está en guerra con Francia y la enfermiza reina Anne delega sus responsabilidades en su amiga Lady Sarah."<<endl;
			cout<<"Horarios: 1:00p, 3:45p, 6:30"<<endl;
            cout<<"Duracion: 1hr 25min"<<endl;
			cout<<"Genero: Drama"<<endl<<endl;

			cout<<"____________________________________________________________"<<endl;
			cout<<"Green Book"<<endl;
			cout<<"Sinopsis: Un pianista negro contrata a un rudo italoamericano para que sea su chofer y guardaespaldas durante una gira por el sur de los Estados Unidos en 1962, un viaje que les adentra en un territorio y una época subyugados al racismo."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 55min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
            cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}
				break;
		    }

		     case 13:{ system("cls");

			cout<<"\t\t\t\t\t\t13. ANGELIKA FILM"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"Peleando con mi familia"<<endl;
			cout<<"Sinopsis: La película está basada en la historia real de Saraya 'Paige' Bevis, una joven luchadora profesional inglesa, ya retirada, que que actualmente trabaja para la WWE."<<endl;
			cout<<"Horarios:  7:00p, 10:15p"<<endl;
			cout<<"Duracion: 1hr 55min 1hr 33min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Como entrenar a tu dragon: El mundo oculto"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados"<<endl;
			cout<<"Horarios: 7:30p, 10:15p"<<endl;
			cout<<"Duracion: 1hr 30min 1 hr 59 min"<<endl;
			cout<<"Genero: Animacion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 10:00p, 09:30p"<<endl;
			cout<<"Duracion: 1hr 40min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Feliz Dia de la muerte 2U"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 1:15p, 4:15p,6:15p, 9:00p"<<endl;
			cout<<"Duracion: 2hr 2min"<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una comedia romántica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  09:15p"<<endl;
			cout<<"Duracion: 1hr 30min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Persecucion en frio"<<endl;
			cout<<"Sinopsis: El quitanieves Nelson Coxman busca venganza contra un cartel de la droga en su ciudad natal de las Montañas Rocosas después de que su hijo fue asesinado por la banda."<<endl;
			cout<<"Horarios: 12:00p,3:45p,7:30,10:45p"<<endl;
			cout<<"Duracion: 1hr 55min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"LA PELÍCULA DE LEGO 2: LA SEGUNDA PARTE"<<endl;
			cout<<"Sinopsis: Han pasado cinco años desde que todo fue increíble y los ciudadanos se enfrentan a una gran nueva amenaza: los invasores Lego Duplo del espacio exterior, destruyendo todo más rápido de lo que pueden reconstruir. La batalla para derrotarlos y restaurar la armonía en el universo Lego llevará a Emmet, Lucy, Batman y sus amigos a mundos lejanos e inexplorados, incluida una extraña galaxia en la que todo es un musical."<<endl;
			cout<<"Horarios: 7:30p"<<endl;
			cout<<"Duracion: 1hr 25min"<<endl;
			cout<<"Genero: Animacion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"EL PRODIGIO (2019)"<<endl;
			cout<<"Sinopsis: El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 10:10p"<<endl;
			cout<<"Duracion: 1hr 25min"<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"La tierra errante"<<endl;
			cout<<"Sinopsis: Al final de la película, Liu Qi relata y contempla las etapas de la migración de la tierra, contando acerca de un obligado e incierto proceso de 2500 años, pero en un tono de esperanza."<<endl;
			cout<<"Horarios: 12:00p, 3:00p, 6:50p, 1o:15p"<<endl;
			cout<<"Duracion: 1hr 25min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 2:00p, 4:25p, 6:50p, 9:10p"<<endl;
			cout<<"Duracion: 1hr 25min"<<endl;
			cout<<"Genero: Romance"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"GLASS (2019)"<<endl;
			cout<<"Sinopsis: El guardia de seguridad David Dunn usa sus habilidades sobrenaturales para rastrear a Kevin Wendell Crumb, un hombre perturbado que tiene veinticuatro personalidades"<<endl;
			cout<<"Horarios: 10:20p"<<endl;
			cout<<"Duracion: 2hr 2min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"SPIDER-MAN: INTO THE SPIDER-VERSE"<<endl;
			cout<<"Sinopsis: Spider-Man es el mentor de un adolescente de Brooklyn, Nueva York, para convertirse en el próximo superhéroe."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 40min"<<endl;
			cout<<"Genero Fantasia:"<<endl<<endl;

            cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}
				break;
		    }

		     case 14:{ system("cls");

            cout<<"\t\t\t\t\t\t14. AMC EMPIRE 25"<<endl<<endl;
            
            cout<<"____________________________________________________________"<<endl;
			cout<<"ESCAPE ROOM (2019)"<<endl;
			cout<<"Sinopsis: Seis extraños se encuentran en circunstancias fuera de su control, y deben usar su ingenio para sobrevivir."<<endl;
			cout<<"Horarios: 4:30p"<<endl;
            cout<<"Duracion: 1hr 30min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"BUMBLEBEE"<<endl;
			cout<<"Sinopsis: A la carrera en el año 1987, Bumblebee the Autobot encuentra refugio en un deposito de chatarra en una pequeña ciudad costera de California. Cuando Charlie, de 17 años, lo revive, rapidamente se entera de que no es un Volkswagen amarillo comun."<<endl;
			cout<<"Horarios: 1:30p, 7:15p"<<endl;
            cout<<"Duracion: 1hr 45min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"SPIDER-MAN: INTO THE SPIDER-VERSE"<<endl;
			cout<<"Sinopsis: Spider-Man es el mentor de un adolescente de Brooklyn, Nueva York, para convertirse en el proximo superheroe."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
            cout<<"Duracion: 1hr 22min"<<endl;
			cout<<"Genero: Fantasia"<<endl<<endl;

			cout<<"____________________________________________________________"<<endl;
			cout<<"THE FAVOURITE"<<endl;
			cout<<"Sinopsis: A principios del s. XVIII, Inglaterra está en guerra con Francia y la enfermiza reina Anne delega sus responsabilidades en su amiga Lady Sarah."<<endl;
			cout<<"Horarios: 1:00p, 3:45p, 6:30"<<endl;
            cout<<"Duracion: 1hr 25min"<<endl;
			cout<<"Genero: Drama"<<endl<<endl;

			cout<<"____________________________________________________________"<<endl;
			cout<<"Green Book"<<endl;
			cout<<"Sinopsis: Un pianista negro contrata a un rudo italoamericano para que sea su chofer y guardaespaldas durante una gira por el sur de los Estados Unidos en 1962, un viaje que les adentra en un territorio y una época subyugados al racismo."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 55min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
            
            cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}
				break;
		    }

			default:{
				
				system("cls");
				return main();
				
				break;
			}

			}
		break;
		}
	
	case '5':{   system("cls");

            cout<<"\t\t\t\t\t\t\t5=(Staten Island)"<<endl<<endl;
            cout<<"\t\t\t\t\t\t1. AMC DINE-IN"<<endl;
			cout<<"\t\t\t\t\t\t2. ATRIUM CINEMA"<<endl;
			cout<<"\t\t\t\t\t\t3. UA STATEN ISLAND STADIUM 16 Y RPX"<<endl;
            cout<<"\t\t\t\t\t\t4. VOLVER"<<endl<<endl;
			cout<<"Elija una opcion:";
			cin>>cines4;

                        switch(cines4){

		case 1:{

			cout<<"\t\t\t\t\t\t1. AMC DINE-IN"<<endl;

			cout<<"____________________________________________________________"<<endl;
			cout<<"Peleando con mi familia"<<endl;
			cout<<"Sinopsis: La película está basada en la historia real de Saraya 'Paige' Bevis, una joven luchadora profesional inglesa, ya retirada, que que actualmente trabaja para la WWE."<<endl;
			cout<<"Horarios:  7:00p, 10:15p"<<endl;
			cout<<"Duracion: 1hr 55min 1hr 33min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Como entrenar a tu dragon: El mundo oculto"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados"<<endl;
			cout<<"Horarios: 7:30p, 10:15p"<<endl;
			cout<<"Duracion: 1hr 30min 1 hr 59 min"<<endl;
			cout<<"Genero: Animacion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 10:00p, 09:30p"<<endl;
			cout<<"Duracion: 1hr 40min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Feliz Dia de la muerte 2U"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 1:15p, 4:15p,6:15p, 9:00p"<<endl;
			cout<<"Duracion: 2hr 2min"<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una comedia romántica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  09:15p"<<endl;
			cout<<"Duracion: 1hr 30min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Persecucion en frio"<<endl;
			cout<<"Sinopsis: El quitanieves Nelson Coxman busca venganza contra un cartel de la droga en su ciudad natal de las Montañas Rocosas después de que su hijo fue asesinado por la banda."<<endl;
			cout<<"Horarios: 12:00p,3:45p,7:30,10:45p"<<endl;
			cout<<"Duracion: 1hr 55min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"LA PELÍCULA DE LEGO 2: LA SEGUNDA PARTE"<<endl;
			cout<<"Sinopsis: Han pasado cinco años desde que todo fue increíble y los ciudadanos se enfrentan a una gran nueva amenaza: los invasores Lego Duplo del espacio exterior, destruyendo todo más rápido de lo que pueden reconstruir. La batalla para derrotarlos y restaurar la armonía en el universo Lego llevará a Emmet, Lucy, Batman y sus amigos a mundos lejanos e inexplorados, incluida una extraña galaxia en la que todo es un musical."<<endl;
			cout<<"Horarios: 7:30p"<<endl;
			cout<<"Duracion: 1hr 25min"<<endl;
			cout<<"Genero: Animacion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"EL PRODIGIO (2019)"<<endl;
			cout<<"Sinopsis: El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 10:10p"<<endl;
			cout<<"Duracion: 1hr 25min"<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"La tierra errante"<<endl;
			cout<<"Sinopsis: Al final de la película, Liu Qi relata y contempla las etapas de la migración de la tierra, contando acerca de un obligado e incierto proceso de 2500 años, pero en un tono de esperanza."<<endl;
			cout<<"Horarios: 12:00p, 3:00p, 6:50p, 1o:15p"<<endl;
			cout<<"Duracion: 1hr 25min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 2:00p, 4:25p, 6:50p, 9:10p"<<endl;
			cout<<"Duracion: 1hr 25min"<<endl;
			cout<<"Genero: Romance"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"GLASS (2019)"<<endl;
			cout<<"Sinopsis: El guardia de seguridad David Dunn usa sus habilidades sobrenaturales para rastrear a Kevin Wendell Crumb, un hombre perturbado que tiene veinticuatro personalidades"<<endl;
			cout<<"Horarios: 10:20p"<<endl;
			cout<<"Duracion: 1hr 25min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"SPIDER-MAN: INTO THE SPIDER-VERSE"<<endl;
			cout<<"Sinopsis: Spider-Man es el mentor de un adolescente de Brooklyn, Nueva York, para convertirse en el próximo superhéroe."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 25min"<<endl;
			cout<<"Genero Fantasia:"<<endl<<endl;
			
        	cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}
			break;
			}

			case 2:{

			cout<<"\t\t\t\t\t\t2. ATRIUM CINEMA"<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Peleando con mi familia"<<endl;
			cout<<"Sinopsis: La película está basada en la historia real de Saraya 'Paige' Bevis, una joven luchadora profesional inglesa, ya retirada, que que actualmente trabaja para la WWE."<<endl;
			cout<<"Horarios:  7:00p, 9:15p"<<endl;
			cout<<"Duracion: 1hr 56min"<<endl;
			cout<<"Genero: Drama"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Como entrenar a tu dragon: El mundo oculto"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 6:00p, 8:15p"<<endl;
			cout<<"Duracion: 1hr 35min"<<endl;
			cout<<"Genero: Animacion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 12:15p, 2:50p, 5:25, 8:00p"<<endl;
			cout<<"Duracion: 1hr 52min 2 hr 2 min "<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Feliz Dia de la muerte 2U"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 12:00p, 2:15p, 4:30p, 6:45p, 9:00p"<<endl;
			cout<<"Duracion: 2hr 8min"<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una comedia romántica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  11:30p, 1:25, 3:20p, 5:15p, 7:10p, 9:05p "<<endl;
			cout<<"Duracion: 1hr 55min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"Persecucion en frio"<<endl;
			cout<<"Sinopsis: El quitanieves Nelson Coxman busca venganza contra un cartel de la droga en su ciudad natal de las Montañas Rocosas después de que su hijo fue asesinado por la banda."<<endl;
			cout<<"Horarios: 12:30p,3:00p,5:30,8:00p"<<endl;
			cout<<"Duracion: 1hr 35min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"LA PELÍCULA DE LEGO 2: LA SEGUNDA PARTE"<<endl;
			cout<<"Sinopsis: Han pasado cinco años desde que todo fue increíble y los ciudadanos se enfrentan a una gran nueva amenaza: los invasores Lego Duplo del espacio exterior, destruyendo todo más rápido de lo que pueden reconstruir. La batalla para derrotarlos y restaurar la armonía en el universo Lego llevará a Emmet, Lucy, Batman y sus amigos a mundos lejanos e inexplorados, incluida una extraña galaxia en la que todo es un musical."<<endl;
			cout<<"Horarios: 11:25p, 12:00p, 12:45p, 1:35p, 2:20p, 3:05p, 3:55p, 4:40p, 5:25p, 6:15, 7:45p, 8:35"<<endl;
			cout<<"Duracion: 1hr 44min"<<endl;
			cout<<"Genero: Animacion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"EL PRODIGIO (2019)"<<endl;
			cout<<"Sinopsis: El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 1:05p, 3:05, 5:05p, 7:05p, 9:05p"<<endl;
			cout<<"Duracion: 1hr 45min"<<endl;
			cout<<"Genero: Terror"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 1:00p, 3:30p, 6:00p, 8:30p"<<endl;
			cout<<"Duracion: 1hr 30min"<<endl;
			cout<<"Genero: Romance"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"GLASS (2019)"<<endl;
			cout<<"Sinopsis: El guardia de seguridad David Dunn usa sus habilidades sobrenaturales para rastrear a Kevin Wendell Crumb, un hombre perturbado que tiene veinticuatro personalidades"<<endl;
			cout<<"Horarios: 12:00p, 2:45"<<endl;
			cout<<"Duracion: 2hr 2min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;
			
            cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}
			break;
			}


			case 3:{

			cout<<"\t\t\t\t\t\t3. UA STATEN ISLAND STADIUM 16 Y RPX\n\n"<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Peleando con mi familia"<<endl;
			cout<<"Sinopsis: La película está basada en la historia real de Saraya 'Paige' Bevis, una joven luchadora profesional inglesa, ya retirada, que que actualmente trabaja para la WWE."<<endl;
			cout<<"Horarios:  7:00p, 9:50p"<<endl;
			cout<<"Duracion: 1hr 48min"<<endl;
			cout<<"Genero: Drama"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Como entrenar a tu dragon: El mundo oculto"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 6:00p, 8:45p"<<endl;
			cout<<"Duracion: 1hr 44min"<<endl;
			cout<<"Genero: Animacion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Run the Race"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 7:00p, 9:40p"<<endl;
			cout<<"Duracion: 1hr 55min"<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"ALITA: BATTLE ANGEL"<<endl;
			cout<<"Sinopsis: Un cyborg combate las fuerzas mortales mientras intenta descubrir la verdad detrás de su misterioso pasado."<<endl;
			cout<<"Horarios: 1:10p, 4:10p, 7:15"<<endl;
			cout<<"Duracion: 1hr 45min 1hr 46min 2 hr 2 min "<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Feliz Dia de la muerte 2U"<<endl;
			cout<<"Sinopsis: Despues de los eventos de la primera pelicula, Tree Gelbman vuelve a entrar inesperadamente en el bucle temporal y se vuelve decidida a escapar despues de darse cuenta que sus amigos ahora estan involucrados.."<<endl;
			cout<<"Horarios: 12:30p, 1:30p,3:30p, 4:30p, 6:30p, 7:30p, 9:30p, 10:10p"<<endl;
			cout<<"Duracion: 2hr 30min 1hr 46min"<<endl;
			cout<<"Genero: Terror"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"ISN'T IT ROMANTIC"<<endl;
			cout<<"Sinopsis: Una mujer descubre que es la protagonista de una comedia romántica de la vida real en un universo alternativo."<<endl;
			cout<<"Horarios:  12:30p, 3:00p, 5:30p, 8:00p, 10:30p"<<endl;
			cout<<"Duracion: 1hr 28min 1hr 46min 1 hr 30 min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"Persecucion en frio"<<endl;
			cout<<"Sinopsis: El quitanieves Nelson Coxman busca venganza contra un cartel de la droga en su ciudad natal de las Montañas Rocosas después de que su hijo fue asesinado por la banda."<<endl;
			cout<<"Horarios: 1:05p, 4:15p, 7:35p, 10:30p"<<endl;
			cout<<"Duracion: 1hr 26min 1hr 46min"<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"LA PELÍCULA DE LEGO 2: LA SEGUNDA PARTE"<<endl;
			cout<<"Sinopsis: Han pasado cinco años desde que todo fue increíble y los ciudadanos se enfrentan a una gran nueva amenaza: los invasores Lego Duplo del espacio exterior, destruyendo todo más rápido de lo que pueden reconstruir. La batalla para derrotarlos y restaurar la armonía en el universo Lego llevará a Emmet, Lucy, Batman y sus amigos a mundos lejanos e inexplorados, incluida una extraña galaxia en la que todo es un musical."<<endl;
			cout<<"Horarios: 12:00p, 12:50p, 1:40p, 3:40p, 4:30p, 6:40p, 9:40p"<<endl;
			cout<<"Duracion: 1hr 22min 1hr 46min 1 hr 30 min"<<endl;
			cout<<"Genero: Animada"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"EL PRODIGIO (2019)"<<endl;
			cout<<"Sinopsis:El nominado al Golden Globe y al Emmy Taylor Schilling protagoniza THE PRODIGY como Sarah, una madre cuyo inquietante comportamiento del joven Miles, señala que una fuerza maligna, posiblemente sobrenatural, lo ha superado."<<endl;
			cout<<"Horarios: 1:05p, 3:05, 5:05p, 7:05p, 9:05p"<<endl;
			cout<<"Duracion: 2hr 2min 1hr 46min 1 hr 48 min"<<endl;
			cout<<"Genero: Terror"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"WHAT MEN WANT"<<endl;
			cout<<"Sinopsis: Un agente deportivo usa su habilidad para escuchar los pensamientos de los hombres para cambiar las mesas de sus colegas groseros."<<endl;
			cout<<"Horarios: 12:45p, 3:50p, 7:20p, 10:05p"<<endl;
			cout<<"Duracion: 1hr 30min 1hr 46min 1 hr 28 min "<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"STAN & OLLIE"<<endl;
			cout<<"Sinopsis: En 1953, durante una gira, la amistad de los comediantes Oliver Hardy y Stan Laurel, los legendarios el Gordo y el Flaco, comienza a resquebrajarse al mismo tiempo que la salud de Oliver se deteriora."<<endl;
			cout<<"Horarios: 4:20"<<endl;
			cout<<"Duracion: 1hr 25min 1hr 46min 1 hr 36 min"<<endl;
			cout<<"Genero: Romantica"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"GLASS (2019)"<<endl;
			cout<<"Sinopsis: El guardia de seguridad David Dunn usa sus habilidades sobrenaturales para rastrear a Kevin Wendell Crumb, un hombre perturbado que tiene veinticuatro personalidades"<<endl;
			cout<<"Horarios: 12:00p, 2:45"<<endl;
			cout<<"Duracion: 2hr 8min 1hr 46min 2 hr 2 min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"The Upside"<<endl;
			cout<<"Sinopsis: Un millonario tetrapléjico establece una amistad profunda con el criminal en libertad condicional al que contrata para cuidarlo. A pesar de que proceden de dos realidades totalmente opuestas, la amistad que surge entre ellos es limpia y férrea."<<endl;
			cout<<"Horarios: 12:00p, 2:45"<<endl;
			cout<<"Duracion: 1hr 43min 1hr 46min 1 hr 28 min"<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Vice (2018)"<<endl;
			cout<<"Sinopsis: George W. Bush, gobernador de Texas, elige como su mano derecha para las elecciones presidenciales del año 2000 a Dick Cheney, presidente ejecutivo de Halliburton Co. Esta es la historia de cómo Cheney llegó a disponer de un poder casi ilimitado."<<endl;
			cout<<"Horarios: 12:00p, 2:45"<<endl;
			cout<<"Duracion: 1hr 55min 1hr 46min 1 hr 32 min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Aquaman"<<endl;
			cout<<"Sinopsis: Aquaman debe recuperar el legendario Tridente de Atlan para salvar a la ciudad subacuática de Atlantis, y al mundo de la superficie, de su hermano hambriento de poder."<<endl;
			cout<<"Horarios: 5:20p, 8:50"<<endl;
			cout<<"Duracion: 1hr 34min 1hr 46min 1 hr 37 min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"SPIDER-MAN: INTO THE SPIDER-VERSE"<<endl;
			cout<<"Sinopsis: Spider-Man es el mentor de un adolescente de Brooklyn, Nueva York, para convertirse en el próximo superhéroe."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 45min 1hr 46min 1 hr 59 min"<<endl;
			cout<<"Genero: Aventura"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"Ralph In Breaks The Internet"<<endl;
			cout<<"Sinopsis: Después de 6 años, Ralph y Vanellope se embarcan en una nueva aventura a las profundidades de Internet para encontrar la pieza que necesitan para reparar un videojuego."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 40min 1hr 46min 1 hr 07 min"<<endl;
			cout<<"Genero: Suspenso"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"Green Book"<<endl;
			cout<<"Sinopsis: Un pianista negro contrata a un rudo italoamericano para que sea su chofer y guardaespaldas durante una gira por el sur de los Estados Unidos en 1962, un viaje que les adentra en un territorio y una época subyugados al racismo."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 38min 1hr 46min 1 hr 52 min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;

            cout<<"____________________________________________________________"<<endl;
			cout<<"A STAR IS BORN (2018) "<<endl;
			cout<<"Sinopsis: Jackson, una estrella de la musica country con problemas de alcoholismo, descubre el talento de Ally, una joven cantante de la cual se enamora. Mientras la carrera de ella despega, Jackson percibe que sus días de gloria están llegando a su fin."<<endl;
			cout<<"Horarios: 1:30p"<<endl;
			cout<<"Duracion: 1hr 22min 1hr 46min 1 hr 38 min"<<endl;
			cout<<"Genero: Comedia"<<endl<<endl;
			
            cout<<"____________________________________________________________"<<endl;
			cout<<"Pantera Negra "<<endl;
			cout<<"Sinopsis: Despues de morir su padre, T'Challa regresa a su nacion, Wakanda. Una vez alli, descubre que tiene un nuevo y terrible enemigo, y T'Challa asume la personalidad de Pantera Negra para salvar no solo al reino de Wakanda, sino a toda la humanidad."<<endl;
			cout<<"Horarios: 10:00p"<<endl;
			cout<<"Duracion: 2hr 25min 1hr 46min 2 hr 02 min"<<endl;
			cout<<"Genero: Accion"<<endl<<endl;
			
            cout << "Presione 1 para volver al menu: ";
			cin >> si;
			if (si = 1)
			{
			system("cls");
			return main();
			system("pause");
			}

			break;
		}
			
			default:{
				
				system("cls");
				return main();
				
				break;
			}
			
			}
				break;
			}
		}
	}
}

