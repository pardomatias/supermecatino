#include <iostream>
#include <string>
using namespace std;

	struct prodotto
	{
		string nome;
		float prezzo;
		string categoria;
	};

void aggiungi(prodotto y,prodotto x[],int &d)
{
	x[d]=y;
	d++;
}

void visualizza(prodotto x[],int d)
{
	for(int j = 0; j < d; j++)
	{
		cout<<"\n il nome del prodotto e': "<<x[j].nome;
	    cout<<"\n la categoria e': "<<x[j].categoria;
        cout<<"\n il prezzo e': "<<x[j].prezzo;
	}
}

void cerca(prodotto y,prodotto x[],int d)
{
	
}

bool cancella(prodotto y,prodotto x[],int d)
{
	
}

void modifica(prodotto y,prodotto x[],int d)
{
	
}

int main(int argc, char** argv) {
	
	prodotto supermercato[100];
    int v, i = 0;
	do
	{
		cout<<"\n1: aggiungi \n";
		cout<<"2: visualizza \n";
		cout<<"3: cerca \n";
		cout<<"4: cancella \n";
		cout<<"5: modifica \n";
		cout<<"0: finire il programma \n";
		cin>>v;
		
		switch(v)
		{
			case 1:
				cout<<"\n inserisci il nome del prodotto: ";
	            cin>>supermercato[i].nome;
	            cout<<"\n inserisci la categoria: ";
	            cin>>supermercato[i].categoria;
                cout<<"\n inserisci il prezzo: ";
                cin>>supermercato[i].prezzo;
				aggiungi(supermercato[i],supermercato,i);
				break;
				
			case 2:
			 	
			    visualizza(supermercato,i);
			    break;
			    
			case 3:
			    cout<<"cosa vuoi cercare?\n";
			    cin>>
			   // cerca();
			    break;
			    
			case 4:
			 	
			 //	cancella();
			    break;
			    
			case 5:
			 	
			 //	modifica();
			    break;
			    
		}
		
		
	}while(v!=0);
	

	
	return 0;
}
