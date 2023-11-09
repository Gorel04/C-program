#include<stdio.h>
#include<stdlib.h>
#define dim 5



int tab1[dim] , tab2[dim], somTab[dim];
int i,j,k,index_suppr ,NDim;
int home_Geo, home_Repe, home_Tab;

int main(){
	 char menu;
    //Affichage menu
    printf("\t\tMENU\n");
    printf("-O- SOUS MENU OBJET GEOMETRIQUE\n");
    printf("-B-SOUS MENU LES ACTIONS REPETITIVES\n");
    printf("-A- SOUS MENU UNI MULTI DIMENTIONNELS\n");
    printf("-Q- QUITTER\n");

    //choix pour pacourir le menu
    printf("Votre choix : ");
    //un espace blanc pour ignorer les entrer vide
    scanf(" %c",&menu);
    system("cls");
    switch(menu){
        case 'O':
        case 'o': printf("\nSOUS MENU GEOMETRIQUE\n");
                  printf("Pressez[1] pour les actions de l'objet Trapeze\n\n");
                  printf("Pressez[2] pour les actions de l'objet Cone circulaire\n\n");
                  printf("Pressez[3] pour les actions de l'objet Boite Rectangulaire \n\n");
                  printf("Pressez[4] pour quitter le sous menu \n\n");
                  printf("Votre choix : ");
                  scanf("%d",&home_Geo);
        break;
        case 'B':
        case 'b': printf("\nSOUS MENU REPETITIVE\n");
                  printf("Pressez[1] pour l'Arrangement et la combinaison de P dans N \n\n");
                  printf("Pressez[2] Affichage du mois correspondant a une saisir par l'utilisateur\n\n");
                  printf("Pressez[3] Sommation des elements composant un nombre entree par l'utlisateur (Ex; 234=9)\n\n");
                  printf("Pressez[4] pour la racine carree du nombre unique 25 saisir dans le clavier\n\n");
                  printf("Pressez[5] pour quitter le sous menu \n\n");
                  printf("Votre choix : ");
                  scanf("%d",&home_Repe);
        break;

        case 'A':
        case 'a': //Vecteur 1 dim[10]
                  printf("\nSOUS MENU UNI MULTI DIMENTIONNELS\n");
                  printf("Pressez[1] Afficher le resultat de la sommation de deux vecteurs 10, supprimer un element se trouvant dans une position\n quelconque du vecteur trouve, puis reafficher le resultat, supprimer  les doublons dans le vecteur trouve et afficher\n a nouveau le resultat \n\n");

                  printf("Pressez[2] Afficher le nombre d'occurences des elements negatifs se trouvant dans le resultat de difference entre 2\nmatrice carrees d'ordre 6\n\n");
                  printf("Pressez[3] Afficher la sommation des elements des lignes et des elements des colonnes resultat des produits\nde deux matrices d'ordre M et N \n\n");

                  printf("Pressez[4] Afficher une matrice carree d'ordre 5, reafficher la matrice apres permutation de la diagonale principale\net la diagonale secondaire \n\n");
                  printf("Pressez[5] Afficher le produit scalaire normal et croissant, de la 3eme lim=gne et de la 4eme colonne du resultat\nde la sommation de deux matrices carrees MM \n\n");

                  printf("Pressez[6] pour quitter le sous menu\n\n");
                  printf("Votre choix : ");
                  scanf("%d",&home_Tab);

                  switch(home_Tab){
                        case 1:   printf("Tableau 1\n");
                                  for(i=0;i<dim;i++){
                                    printf("Entrez les valeurs de la matrice :");
                                    scanf("%d",&tab1[i]);
                                   }
                                   //Affichage du vecteur 1
                                   for(i=0;i<dim;i++){
                                    printf("%d \t",tab1[i]);
                                   }

                                   //Vecteur 2 dim[10]
                                   printf("\nTableau 2\n");
                                   for(i=0;i<dim;i++){
                                    printf("Entrez les valeurs de la matrice :");
                                    scanf("%d",&tab2[i]);
                                   }
                                   //Affichage du vecteur 2
                                   for(i=0;i<dim;i++){
                                    printf("%d \t",tab2[i]);
                                   }
                                   printf("\nSommation des deux Vecteurs \n");
                                   //sommation des deux vecteurs tab1 + tab2 -> somTab
                                   for(i=0;i<dim;i++){
                                    somTab[i] = tab1[i] + tab2[i];
                                   }
                                   //Affichage le vecteur somTab
                                   for(i=0;i<dim;i++){
                                        printf("%d \t",somTab[i]);
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
                                        somTab[i] = somTab[i+1];
                                   }

                                   //Affichage le vecteur somTab après la suppression d'un élément
                                   /*après la suppression de l'élément on doit réduire la dimension de -1
                                   pour empêcher d'autres éléments s'affichent*/
                                   NDim= dim-1;
                                   for(i=0;i<NDim;i++){
                                        printf("%d \t",somTab[i]);
                                   }

                                   //Supprimer les doublons
                                   //le compteur i parcours le vecteur de l'index 0 à dim -1 tandis que le compteur j est en avance
                                   // du compteur i  c-à-d à +1 sur le compteur i à partir delà on peut etablir un test d'égalité

                                   for(i=0;i<NDim;i++){
                                        for(j=(i+1);j<NDim;){
                                            if(somTab[i]==somTab[j]){
												// ce boucle est là pour remplacer l'ensemble  des cases si toute fois le test est vrai c-à-d t[0]=t[1],
												//t[1]=t[2] ainsi de suite ... après on va décrementer la dimension -1
                                                for(k=j;k<NDim;k++){
                                                    somTab[k]= somTab[k+1];
												}
												NDim--;
                                            }
                                            //Dans le cas ou le test est on incrémente j de +1
                                            else{
                                                j++;
                                            }
                                   }
                                   }
                                   printf("\nLes doublons\n");
                                   for(i=0;i<NDim;i++){
                                        printf("%d \t",somTab[i]);
                                   }

                  }

        break;
        case 'Q':
        case 'q': printf("QUITTER");
                  //exit(0);
                  printf("hello");
        break;
        default: printf("ERREUR d'entrer !");

    }

}