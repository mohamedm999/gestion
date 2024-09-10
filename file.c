// Online C compiler to run C program online
        
#include <stdio.h>

void CalculerMoy(char notes[],int n){
    
    int Moyanne = 0 ;
    int somme = 0;
    for(int i=0 ; i<n ;i++){
        
       somme+=notes[i];
    };
    Moyanne=somme/n;
    printf("votre moyanne est %d:",Moyanne);
    
}

void TrouverNotes(char notes[],int n){
    
    int max = 0 ;
    int min = 0 ;
    
    for(int i=0 ; i<n ;i++){
        
        if()
       notes[i];
    };
    
    
}

int main() {
    int n ;
    printf("Combien d'etudiants y a-t-il ?");
    scanf(" %d",&n);
    
    char notes[n] ;
    
    for(int i=0 ; i<n ;i++){
        
        printf("Entrez la note de l'etudiant %i :",i+1);
        scanf("%d",&notes[i]);

    };
    
    int action ;
    
    printf("Que souhaitez-vous faire  ? \n");
    printf("1.Calculer la moyenne des notes  \n");
    printf("2.Trouver la note la plus elevee et la plus basse  \n");
    printf("3.Afficher les notes superieurs a la moyanne \n ");
    printf("4.Compter le nombre d'etudiants ayant valide (note>=12) \n");
    printf("5.Compter le nombre d'etudiants ayant valide (note>=12)\n");
    printf("6.Quitter \n");
    
    scanf(" %d",&action);
    
    switch(action){
        case 1 : CalculerMoy(notes,n);
        break ;
        case 2 : Trouvernotes(notes,n);
        break ;
    }
    
    

    return 0;
}
















