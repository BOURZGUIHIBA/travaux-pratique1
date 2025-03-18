#include <stdio.h>
#include <stdlib.h>
// definir la structure noeud 
typedef struct noeud
{
    int val ;
    struct noeud *suiv ;
} noeud;
// creation d un nouveau noeud 
noeud * cree(int valeur)
{
    noeud * newnoeud ;
    // allocation de la memoire 
    newnoeud = (noeud*) malloc (sizeof (noeud)) ;
    newnoeud->val = valeur ;
    newnoeud-> suiv= null ;
    return newnoeud ;
}
// affichage des elements de la liste 
void affichage (noeud*debut )
{
    noeud*tmp ;
    tmp =debut ;
    while (tmp!=null)
    {
        printf ("La valeur est %d",tmp->val)
        tmp = tmp ->suiv ;

    }
}
// ajout au debut de la liste 
noeud*ajoutD (noeud*debut,int valeur)
{
    noeud *newnoeud ;
    newnoeud = (noeud*) malloc (sizeof (noeud)) ;
    newnoeud->val=valeur;
    newnoeud ->suiv = null  ;
    if  (debut==null)
    {
        debut=newnoeud  ;
        newnoeud->suiv=debut  ;
        debut=newnoeud  ;
        return debut  ;
    }
}
// ajout a la fin de la liste 
noeud*ajoutF (noeud*debut,int valeur)
{
    noeud *newnoeud ;
    newnoeud = (noeud*) malloc (sizeof (noeud)) ;   
    newnoeud->val = valeur  ;  
    newnoeud->suiv=null  ;  
    if(debut==null)
    {
        debut = newnoeud  ;  
    }
    noeud*tmp 
    tmp= debut ;  
    while(tmp->suiv !=null)
    {
        tmp = tmp->suiv ;  
    }
    tmp->suiv = newnoeud ;  
    return debut  ;  
}
//recherche d un element de la liste 
void recherche(noeud*debut,int valeur)
{
    int sible  ;  
    noeud*tmp  ;  
    tmp=debut ;  
    while(tmp!=null)
    {
        if( tmp ->val==valeur)
        {
            sible = 1  ;  
            break  ;  
        }
        else 
        {
            sible = 0 ;  
        }
        tmp = tmp->suiv ;  
    }
    if(sible==1 )
    printf("la valeur existe \n") ;  
else
printf("la valeur n est existe pas \n") ;  
}
// calcule de la taille de la liste 
{
    int taille = 0 ;  
    noeud *tmp;  
    tmp=debut;  
    while(tmp!=null)
    {
        taille++;  
        tmp =tmp->suiv ;  
    }
    return taille ;  
}
// insertion a une position donnee 
noeud*insertion(noeud*debut,int pos,int val)
{
    noeud*newnoeud;   
    noeud *tmp;  
    newnoeud->val=valeur;  
    newnoeud ->suiv = null ;  
    int size = taille (debut);  
    if (pos<1 || pos>size+1)

    {
        printf("la position est incorrecte ");  
    }
    else if (pos == 1)
    {
        newnoeud->suiv=debut ;  
        debut =newnoeud ;  
    }
    else
    {
        tmp=debut;  
        for (i=1;  i<pos;  i++)
        {
            tmp=tmp->suiv
        }
        newnoeud->suiv=tmp->suiv ; 
        tmp->suiv =newnoeud; 

    }
    return debut ; 
}
// suppression au debut 
noeud*suppressionD(noeud*debut)
{
noeud*tmp; 
tmp=debut; 
if(debut==null)
{
    printf("la liste est vide "); 

}
else 
{
    debut=debut->suiv ; 
    free(tmp);
}
return debut;
}
// suppression le dernir noeud de la liste 
noeud*suppressionF(noeud*debut)
{
    if(debut==null)
    printf("la liste est vide ");
noeud*tmp;
tmp=debut;
if(tmp->suiv==null)
{
    free(tmp);
    printf("supression a ete realisee !");
}
while(tmp->suiv->suiv!=null)
{
    tmp=tmp->suiv;
}
free(tmp);
tmp->suiv=null;
return debut;
}
//supression d un element de la liste a une position donee
