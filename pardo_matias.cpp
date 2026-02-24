
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
        cout<<"\n";
	}
}

void cerca(string y,prodotto x[],int d)
{
	for(int i = 0; i < d; i++)
	{
		if(x[i].nome==y)
		{
			cout<<"il prodotto e' presente nella lista \n";
			cout<<"la sua categoria e' "<<x[i].categoria<<"\n";
			cout<<"il prezzo e' "<<x[i].prezzo<<"\n";			
			break;
		}
	}
}

bool cancella(prodotto y,prodotto x[],int d)
{
	
}

void modifica(prodotto y,prodotto x[],int d)
{
	
}

int main(int argc, char** argv) {
	
	prodotto supermercato[100],c;
    int v, d = 0;
    string al;
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
	            cin>>c.nome;
	            cout<<"\n inserisci la categoria: ";
	            cin>>c.categoria;
                cout<<"\n inserisci il prezzo: ";
                cin>>c.prezzo;
				aggiungi(c,supermercato,d);
				break;
				
			case 2:
			 	
			    visualizza(supermercato,d);
			    break;
			    
			case 3:
			    cout<<"cosa vuoi cercare?\n";
			    cin>>al;
			    cerca(al,supermercato,d);
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
