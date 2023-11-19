#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define dim 10
#define dim2 6
#define dim4 5

//Variable menu
char menu;
int home_Geo, home_Repe, home_Tab;

float surf,vol,perimetre,lo, la ,c1,c2,c3,c4,rayon, g_base, p_base, h;

long long arrangement, combinaison,fact_n,fact_p , fact_np;
int n,p,nbre,val,valeur,aide;

//-------------------------------------------Variable Tableau-----------------------------------
//------------Variable indice-------- ,--------- dimension-------,---------compteur-----------
int i,j,k,m,index_suppr ,nv_dim, compteur, diml,dimc,dimc2 ;
int som,prod;
//-------------------------Tableau , Vecteur-----------------------------------------
int Vecteur1[dim] , Vecteur2[dim], somVecteur[dim] ,
Tab0[dim2][dim2], Tab1[dim2][dim2], DiffTab[dim2][dim2] ,
Tableau1[40][50], Tableau2[50][60],ProdTableau[40][60],
Table[dim4][dim4], temp[dim4],
Tab_1[30][30],Tab_2[30][30],Som_Tab[30][30],Vect_1[30],Vect_2[30],P_Vect[30];
int main(){
    //Affichage menu
    home://declaration d'une etiquette pour  goto
	system("cls");
	while(1){
		system("cls");
		printf("      \t__________________________\n\t|");
		printf("          MENU           |\n");
		printf("\t|_________________________|\n");
		printf("\nPressez [O] SOUS MENU OBJET GEOMETRIQUE\n");
		printf("Pressez [B] SOUS MENU LES ACTIONS REPETITIVES\n");
		printf("Pressez [A] SOUS MENU UNI MULTI DIMENTIONNELS\n");
		printf("Pressez [Q] QUITTER\n");

		//choix pour pacourir le menu
		printf("Votre choix : ");
		scanf(" %c",&menu);
		if( menu=='o' || menu == 'O'){
			break;
		}
		if( menu=='b' || menu == 'B'){
			break;
		}
		if( menu=='a' || menu == 'A'){
			break;
		}
		if( menu=='q' || menu == 'Q'){
			break;
		}
	}

		switch(menu){
			case 'O':
			case 'o':
				do{
					 system("cls");
					 printf(" _________________________________________");
					 printf("\n|\t   SOUS MENU GEOMETRIQUE          |\n|");
					 printf("_________________________________________|\n");
					  printf("\nPressez[1] pour les actions de l'objet Trapeze\n\n");
					  printf("Pressez[2] pour les actions de l'objet Cone circulaire\n\n");
					  printf("Pressez[3] pour les actions de l'objet Boite Rectangulaire \n\n");
					  printf("Pressez[4] pour quitter le sous menu \n\n");
					  printf("Votre choix : ");
					  scanf("%d",&home_Geo);
				}while((home_Geo < 1) || home_Geo >4 );
				switch(home_Geo){
				case 1:// Actions de l'objet Trapeze
					//Saisir les donnees
					printf("\nPERIMETRE\n");
					printf("Entrez le cote 1 du Trapeze : ");
					scanf("%f",&c1);
					printf("Entrez le cote 2 du Trapeze : ");
					scanf("%f",&c2);
					printf("Entrez le cote 3 du Trapeze : ");
					scanf("%f",&c3);
					printf("Entrez le cote 2 du Trapeze : ");
					scanf("%f",&c4);

					//Traitement
					perimetre=c1+c2+c3+c4;
					//Affichage
					printf("Perimetre du Trapeze :\n");
					printf("\nP = cote1 + cote2 + cote3 + cote4 \nP =  %.2f +  %.2f +  %.2f +  %.2f \n P = %.2f \n\n",c1,c2,c3,c4,perimetre);
					system("pause");
					system("cls");
					//Saisir les donnees
					printf("SURFACE\n");
					printf("Entrez la grande base du Trapeze : ");
					scanf("%f",&g_base);
					printf("Entrez la petite base du Trapeze : ");
					scanf("%f",&p_base);
					printf("Entrez la hauteur du Trapeze : ");
					scanf("%f",&h);
					//Traitement
					surf =((g_base+p_base)*h)/2.0;
					//Affichage
					printf("\nS = (B+b)*h/2\nS = (%.2f + %.2f)* %.2f /2\nS =%.2f\n\n",g_base,p_base,h,surf);
					system("pause");
				break;

				case 2://les actions de l'objet Cone circulaire
					//Saisir les donnees
					printf("CONE CIRCUAIRE\n");
					printf("Entrez le rayon du Cone : ");
					scanf("%f",&rayon);
					printf("Entrez la Hauteur du Cone : ");
					scanf("%f",&h);

					//Traitement
					vol=1.0/3.0*M_PI*(pow(rayon,2))*h;
					//Affichage
					printf("\nV = 1/3*pi*r*r*h\nV = 1/3 * %.2f * %.2f * %.2f * %.2f  \nV = %.2f\n\n",M_PI,rayon,rayon,h,vol);
				break;

				case 3: //les actions de l'objet boite rectangulaire
					//Saisir les donnees
					printf("BOITE RECTANGULAIRE\n");
					printf("Entrez la longueur du Cone : ");
					scanf("%f",&lo);
					printf("Entrez la largeur du Cone : ");
					scanf("%f",&la);
					printf("Entrez la Hauteur du Cone : ");
					scanf("%f",&h);
					//Traitement
					vol=lo*la*h;

					//Affichage
					printf("\nV = long*larg*haut\nV = %.2f * %.2f * %.2f \nV = %.2f\n\n",lo,la,h,vol);
				break;

					case 4://Quitter le sous menu
								//Utilisation un saut non structure pour revenir au menu principal ce qui permet de sauter directement au menu
								goto home;
					break;
				}
			break;
			case 'B':
			case 'b':
					do{
						 system("cls");
						 printf(" _________________________________________\n|");
						 printf("\t   SOUS MENU REPETITIVE           |\n");
						 printf("|_________________________________________|\n");
						 printf("\nPressez[1] pour l'Arrangement et la combinaison de P dans N \n\n");
						 printf("Pressez[2] Affichage du mois correspondant a une saisir par l'utilisateur\n\n");
						 printf("Pressez[3] Sommation des elements composant un nombre entre par l'utlisateur (Ex; 234=9)\n\n");
						 printf("Pressez[4] pour la racine carree du nombre unique 25 saisir dans le clavier\n\n");
						 printf("Pressez[5] pour quitter le sous menu \n\n");
						 printf("Votre choix : ");
						 scanf("%d",&home_Repe);
					}while((home_Repe < 1) || home_Repe >5 );

					switch(home_Repe){
						case 1://Arrangement et la combinaison de P dans N
							// A(p,n)=n!/(n-p)!         C(p,n) =n!/p!(n-p)!
							//saisir la dimension de N
							do{
								printf("Entrez la dimension de N :");
								scanf("%d",&n);
								if(n<0){
									printf("Erreur de dimension");
								}
							}while(n<0);

							//saisir la dimension de P
							do{
								printf("\nEntrez la dimension de P :");
								scanf("%d",&p);
								if(p<0 || p>n){
									printf("\nErreur de dimension \nP doit inferieur a  la dimension de N et superieur ou egal a 0\n");
								}
							}while(p<0 || p>n);

							//Factorielle de N!
							fact_n=1;
							for(i=1;i<=n;i++){
								fact_n=fact_n*i;
							}

							//Factorielle de P!
							fact_p=1;
							for(i=1;i<=p;i++){
								fact_p=fact_p*i;
							}

							//Factorielle de (N-P)!
							fact_np=1;
							for(i=1;i<=(n-p);i++){
								fact_np= fact_np*i;
							}

							printf("%llu\n",fact_np);
							arrangement= fact_n/fact_np;
							combinaison= fact_n/(fact_p*fact_np);
							//Affichage
							printf("Arrangement de %d dans %d est : %llu \nCombinaison de %d dans %d est : %llu",p,n,arrangement,p,n,combinaison);
						break;
						case 2:
							do{
								printf("Saisis un nombre compris entre 1 a 12 :");
								scanf("%d",&nbre);
							}while(nbre<1 || nbre>12);
							printf("\nVous avez choisi %d qui correspond au mois de : ",nbre);
							switch(nbre){
								case 1:printf("Janvier\n");
								break;
								case 2:printf("Fevrier\n");
								break;
								case 3:printf("Mars\n");
								break;
								case 4:printf("Avril\n");
								break;
								case 5:printf("Mai\n");
								break;
								case 6:printf("Juin\n");
								break;
								case 7:printf("Juillet\n");
								break;
								case 8:printf("Aout\n");
								break;
								case 9:printf("Septembre\n");
								break;
								case 10:printf("Octobre\n");
								break;
								case 11:printf("Novembre\n");
								break;
								case 12:printf("Decembre\n");
								break;
								default:printf("Erreur");
							}
						break;
								case 3:
									/*val=234;
									int valeur ;
									valeur= val % 10; //4
									printf("mod %d\n",valeur);
									valeur=val/10;//23
									printf("div  %d\n",valeur);
									val =valeur; //val =23
									valeur= val % 10;//3
									printf("mod  %d\n",valeur);
									valeur=val/10;//2
									printf(" div  %d\n",valeur);
									val = valeur; //2
									valeur= val % 10; //2
									printf(" mod  %d\n",valeur);*/

									printf("\nSommation des elements composant d'un nombre (Ex: 234=9)\n\n");
									do{
										printf("Saisis un nombre : ");
										scanf("%d",&val);
									}while(val<1);

									aide=val;
									while(val !=0){
										valeur += val % 10;
										val=val/10;
									}
									printf(" \nLa sommation de %d est :%d\n",aide,valeur);
								break;
								case 4:// racine carre de 25
									do{
										printf("\nSaisir le nombre 25 pour calculer sa racine carre :");
										scanf("%d",&nbre);
										if(nbre!= 25){
											printf("\nvous devez entrer uniquement 25!\n");
										}
									}while(nbre!= 25);

									val=sqrt(nbre);
									printf("\nLa racine carree de %d est : %d\n\n",nbre, val);

								break;
						case 5://Quitter le sous menu
								//Utilisation un saut non structure pour revenir au menu principal ce qui permet de sauter directement au menu
								goto home;
						break;
					}
			break;

			case 'A':
			case 'a': //Vecteur 1 dim[10]
					do{
						 system("cls");
						 printf(" _________________________________________\n|");
						 printf("    SOUS MENU UNI MULTI DIMENTIONNELS    |\n");
						  printf("|_________________________________________|\n");
						 printf("\nPressez[1] Afficher le resultat de la sommation de deux vecteurs 10, supprimer un element se trouvant dans une position\n quelconque du vecteur trouve, puis reafficher le resultat, supprimer  les doublons dans le vecteur trouve et afficher\n a nouveau le resultat \n\n");

						  printf("Pressez[2] Afficher le nombre d'occurences des elements negatifs se trouvant dans le resultat de difference entre 2\nmatrice carrees d'ordre 6\n\n");
						  printf("Pressez[3] Afficher la sommation des elements des lignes et des elements des colonnes resultat des produits\nde deux matrices d'ordre M et N \n\n");

						  printf("Pressez[4] Afficher une matrice carree d'ordre 5, reafficher la matrice apres permutation de la diagonale principale\net la diagonale secondaire \n\n");
						  printf("Pressez[5] Afficher le produit scalaire normal et croissant, de la 3eme lim=gne et de la 4eme colonne du resultat\nde la sommation de deux matrices carrees MM \n\n");

						  printf("Pressez[6] pour quitter le sous menu\n\n");
						  printf("Votre choix : ");
						  scanf("%d",&home_Tab);
					}while((home_Tab < 1) || home_Tab >6 );


					  switch(home_Tab){
							case 1: //Vecteur 1 dim[10]
									  printf("Vecteur 1\n");
									  for(i=0;i<dim;i++){
										printf("Entrez les valeurs de la matrice :\nV[%d]= ",i);
										scanf("%d",&Vecteur1[i]);
									   }
									   //Affichage du vecteur 1
									   for(i=0;i<dim;i++){
										printf("%d \t",Vecteur1[i]);
									   }

									   //Vecteur 2 dim[10]
									   printf("\nVecteur 2\n");
									   for(i=0;i<dim;i++){
										printf("Entrez les valeurs de la matrice :\nV[%d]= ",i);
										scanf("%d",&Vecteur2[i]);
									   }
									   //Affichage du vecteur 2
									   for(i=0;i<dim;i++){
										printf("%d \t",Vecteur2[i]);
									   }
									   printf("\nSommation des deux Vecteurs \n");
									   //sommation des deux vecteurs tab1 + tab2 -> somTab
									   for(i=0;i<dim;i++){
										somVecteur[i] = Vecteur1[i] + Vecteur2[i];
									   }
									   //Affichage le vecteur somTab
									   printf("\nSommation 2 Vecteur :\n");
									   for(i=0;i<dim;i++){
											printf("%d \t",somVecteur[i]);
									   }

									   //demander la position de l'élément à suprimer  dans somTab
									   do{
											printf("\nEntrez la position de l'element vous voulez supprimer entre 1 a %d: ",dim);
											scanf("%d",&index_suppr);
									   }while(index_suppr < 0 || index_suppr> dim);

									   /*---------supprime l'élément ------------
										le choix de l'élément à supprimer se fait en fonction
										 de la position de l'élément mais pas en fonction de l'index
										 c'est la raison pour laquelle index_suppr -1 ex: 3eme élément se trouve
										 dans l'index 2
									   */
									   for(i=(index_suppr-1);i<dim;i++){
											somVecteur[i] = somVecteur[i+1];
									   }

									   //Affichage le vecteur somTab après la suppression d'un élément
									   /*après la suppression de l'élément on doit réduire la dimension de -1
									   pour empêcher d'autres éléments s'affichent*/
									   printf("Le vecteur apres la suppression d'un element :\n");
									   nv_dim= dim-1;
									   for(i=0;i<nv_dim;i++){
											printf("%d \t",somVecteur[i]);
									   }

									   //Supprimer les doublons
									   //le compteur i parcours le vecteur de l'index 0 à dim -1 tandis que le compteur j est en avance
									   // du compteur i  c-à-d à +1 sur le compteur i à partir delà on peut etablir un test d'égalité

									   for(i=0;i<nv_dim;i++){
											for(j=(i+1);j<nv_dim;){
												if(somVecteur[i]==somVecteur[j]){
													// ce boucle est là pour remplacer l'ensemble  des cases si toute fois le test est vrai c-à-d t[0]=t[1],
													//t[1]=t[2] ainsi de suite ... après on va décrementer la dimension -1
													for(k=j;k<nv_dim;k++){
														somVecteur[k]= somVecteur[k+1];
													}
													nv_dim--;
												}
												//Dans le cas ou le test est on incrémente j de +1
												else{
													j++;
												}
									   }
									   }
									   printf("\n\n Supprime les doublons dans le vecteur :\n");
									   for(i=0;i<nv_dim;i++){
											printf("%d \t",somVecteur[i]);
									   }
									   break;
							case 2:// nombre d'occurence négatif
										//1ere matrice
										//Acquisition des donnees
										for(i=0;i<dim2;i++){
											for(j=0;j<dim2;j++){
												printf("\nEntrez la valeur %d :\nTab[%d][%d]= ",j+1,i,j);
												scanf("%d",&Tab0[i][j]);
											}
										}
										// Affichage Tab0
										for(i=0;i<dim2;i++){
											for(j=0;j<dim2;j++){
												printf("%7d",Tab0[i][j]);
											}
											printf("\n");
										}
										// 2eme matrice
										//Acquisition des donnees
										for(i=0;i<dim2;i++){
											for(j=0;j<dim2;j++){
												printf("\nEntrez la valeur %d :\nTab[%d][%d]= ",j+1,i,j);
												scanf("%d",&Tab1[i][j]);
											}
										}
										//  Affichage Tab1
										for(i=0;i<dim2;i++){
											for(j=0;j<dim2;j++){
												printf("%7d ",Tab1[i][j]);
											}
											printf("\n");
										}

										//différence entre Tab0 et Tab1
										printf("\nDifference entre deux matrices :\n");
										for(i=0;i<dim2;i++){
											for(j=0;j<dim2;j++){
												DiffTab[i][j] = Tab0[i][j] - Tab1[i][j];
											}
										}
										printf("\n");
										for(i=0;i<dim2;i++){
											for(j=0;j<dim2;j++){
												printf("%7d",DiffTab[i][j]);
											}
											printf("\n");
										}

										//nombre d'occurence
										compteur=0;
										for(i=0;i<dim2;i++){
											for(j=0;j<dim2;j++){
												if(DiffTab[i][j]<0){
													compteur++;
												}
											}
										}

										printf("\nLe nombre d'occurence des elements negatifs qui se trouve dans la matrice est : %d",compteur);

							break;
							case 3://Sommation des lignes et Produit des colonnes
									//saisir les dimensions des Tableaux
									do{
										printf("Entrez le nombre de lignes du 1er Tableau : ");
										scanf("%d",&diml);
									}while(diml <2 || diml >40);

									do{
										printf("Entrez le nombre de colonnes du 1er Tableau : ");
										scanf("%d",&dimc);
									}while(dimc <2 || dimc>50);
									//Pour que le produit deux matrices soit possible , il faut que le nombre de colonnes du 1er Tab soit egal a le nombre
									//de lignes du 2eme Tab c'est la raison pour laquelle je n'ai pas demande a l'utilisateur de rentrer le nombre de ligne du 2eme Tab
									do{
										printf("Entrez le nombre de colonnes du 2eme Tableau : ");
										scanf("%d",&dimc2);
									}while(dimc2 <2 || dimc2>60);

									//Acquisition des donnees du Tab 1
									for(i=0;i<diml;i++){
										for(j=0;j<dimc;j++){
											printf("\nEntrez la valeur %d :\nTab[%d][%d]= ",j+1,i,j);
											scanf("%d",&Tableau1[i][j]);
										}
									}
									//Affichage Tab 1
									for(i=0;i<diml;i++){
										for(j=0;j<dimc;j++){
											printf("%7d",Tableau1[i][j]);
										}
										printf("\n");
									}

									//Acquisition des donnees du Tab 2
									for(i=0;i<dimc;i++){
										for(j=0;j<dimc2;j++){
											printf("\nEntrez la valeur %d :\nTab[%d][%d]= ",j+1,i,j);
											scanf("%d",&Tableau2[i][j]);
										}
									}

									//Affichage Tab 2
									for(i=0;i<dimc;i++){
										for(j=0;j<dimc2;j++){
											printf("%7d",Tableau2[i][j]);
										}
										printf("\n");
									}

									//Produit de deux matrices
									for(i=0;i<diml;i++){
										for(j=0;j<dimc2;j++){
											//le nombre de colonnes de la 1ere matrice determine combien d'element de la 1ere matrice sont impliques
											//dans le produit avec la 2eme matrice ou ces colonnes de i qui  vont multiplier les elements de j c'est pourquoi
											// on choisit dimc
											for(k=0;k<dimc;k++){
												ProdTableau[i][j] += Tableau1[i][k] * Tableau2[k][j];
											}
										}
									}
									//Affichage Produit deux Tab
									for(i=0;i<diml;i++){
										for(j=0;j<dimc2;j++){
											printf("%7d",ProdTableau[i][j]);
										}
										printf("\n");
									}
									//Sommation des lignes
									som=0;
									for(i=0;i<diml;i++){
										for(j=0;j<dimc2;j++){
											som +=ProdTableau[i][j];
										}
									}
									printf("Somation des lignes du resultat des produits des deux matrices est : %d",som);

									//Produit des colonnes
									prod=1;
									for(j=0;j<dimc2;j++){
										for(i=0;i<diml;i++){
											prod +=ProdTableau[i][j];
										}
									}
									printf("Produit des colonnes du resultat des produits des deux matrices est : %d",prod);
							break;
							case 4://permutation diagonale
								//Acquisition des donnees
								//dim=
								for(i=0;i<5;i++){
									for(j=0;j<5;j++){
										printf("\nEntrez la valeur %d :\nTab[%d][%d]= ",j+1,i,j);
										scanf("%d",&Table[i][j]);
									}
								}
								//Affichage du tableau
								for(i=0;i<5;i++){
									for(j=0;j<5;j++){
										printf("%7d",Table[i][j]);
									}
									printf("\n");
								}

								//permuter les diagonales
								for(i=0;i<5;i++){
									temp[i]=Table[i][i];
									Table[i][i]=Table[i][5-i-1];
									Table[i][5-i-1]=temp[i];
								}
								printf("\n");
								//Affichage du tableau apres la permutation
								for(i=0;i<5;i++){
									for(j=0;j<5;j++){
										printf("%7d",Table[i][j]);
									}
									printf("\n");
								}
							break;
							case 5:// produit  scalaire normal et croissant su 3eme ligne et 4eme colonne apres sommation 2 matrice MM
								//Entrer la dimension
								do{
									printf("Saisir la dimention de la matrice carree MM : ");
									scanf("%d",&m);
								}while(m<2 || m>30);

								// Saisir les donnees Tab 1
								printf("\nMatrice 1\n");
								for(i=0;i<m;i++){
									for(j=0;j<m;j++){
										printf("Entrez la valeur %d :\nTab[%d][%d]= ",j+1,i,j);
										scanf("%d",&Tab_1[i][j]);
									}
								}

								// Saisir les donnees Tab 2
								printf("\nMatrice 2\n");
								for(i=0;i<m;i++){
									for(j=0;j<m;j++){
										printf("Entrez la valeur %d :\nTab[%d][%d]= ",j+1,i,j);
										scanf("%d",&Tab_2[i][j]);
									}
								}

								//Affichage Tab 1 et Tab 2
								printf("\n      Matrice 1\n\n");
								for(i=0;i<m;i++){
									for(j=0;j<m;j++){
										printf("%7d",Tab_1[i][j]);
									}
									printf("\n");
								}
								printf("\n      Matrice 2\n\n");
								for(i=0;i<m;i++){
									for(j=0;j<m;j++){
										printf("%7d",Tab_2[i][j]);
									}
									printf("\n");
								}
								//Sommation des matrices
								for(i=0;i<m;i++){
									for(j=0;j<m;j++){
										Som_Tab[i][j]= Tab_1[i][j] + Tab_2[i][j];
									}
								}

								//Affichage Matrice Som_Tab
								printf("\nSomme Tab 1 et Tab 2 \n\n");
								for(i=0;i<m;i++){
									for(j=0;j<m;j++){
										printf("%7d",Som_Tab[i][j]);
									}
									printf("\n");
								}


								// Importer les elements lignes dans un vecteur Vect_1
								printf("\nVecteur Vect_1 (3eme ligne) :\n");

								for(i=0; i<m; i++){
									Vect_1[i]= Som_Tab[2][i];
								}

								// Afficher le vecteur Vect_1
								printf("\n3eme ligne :\n");
								for(i=0; i<m; i++){
									printf("%d\t", Vect_1[i]);
								}

								// Importer les elements colonnes dans un vecteur Vect_2

								printf("\nVecteur Vect_2 (4eme colonne) :\n");
								for(i=0; i<m; i++){
									Vect_2[i] = Som_Tab[i][3];
								}

								// Afficher le vecteur Vect_2
								printf("\n4eme colonne :\n");
								for(i=0; i<m; i++){
									printf("%d\n", Vect_2[i]);
								}

								// Produit scalaire 3eme ligne 4eme colonne
								printf("\n\nProduit scalaire de 3eme ligne et 4eme colonne normal et croissant :\n");
								for(i=0; i<m; i++){
									P_Vect[i] = Vect_1[i] * Vect_2[i];
								}

								for(i=0; i<m; i++){
									for(j=(i+1); j<m;j++){
										if(P_Vect[i]<P_Vect[j]);
									}
									printf("%d\t", P_Vect[i]);
								}
								system("cls");
							break;
							case 6://Quitter le sous menu
								//Utilisation un saut non structure pour revenir au menu principal ce qui permet de sauter directement au menu
								goto home;
							break;

					 }

			break;
			case 'Q':
			case 'q':
					  exit(0);
			break;
			default: printf("\n  ERREUR\n  CHOIX INCORRECTE !\n");

		}
	}
