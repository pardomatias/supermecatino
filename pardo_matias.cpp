

#include <iostream>
#include <string>
using namespace std;

	struct prodotto
	{
		string nome;
		float prezzo;
		string categoria;
	};
	 
void sort(prodotto x[],int d)
{
	prodotto primo;
	for(int i = 0; i < d; i++)  
	{
		for(int j = i; j < d; j++)  
		{
			if(j==i)
			{
				primo = x[i];  
			}
			if(x[j].nome < primo.nome)
			{
				primo = x[j];
				x[j] = x[i];
				x[i] = primo;
			}
		}
	}
}	

void aggiungi(prodotto y,prodotto x[],int &d,int i)
{
	if(i != -1)
	{
		x[i].prezzo=y.prezzo;
	}
	else
	{
		x[d]=y;
	    d++;
	}

	sort(x,d);
}

string visualizza(prodotto ele[], int d){
	string s;
	for(int i=0;i<d;i++){
		s+=ele[i].nome+"\t";
		s+=ele[i].categoria+"\t";
		s+=to_string(ele[i].prezzo)+"\n";
	}
	return s;
}

void cerca(string y,prodotto x[],int d,int &j)
{
	j = -1;
	for(int i = 0; i < d; i++)
	{
		if(x[i].nome==y)
		{
			j = i;
		}
	}
}

bool cancella(string y,prodotto x[],int &d)
{	
        int i = 0;
		cerca(y, x, d, i);
		if(i != -1)
		{
			for(int j = i; j < d - 1; j++)
			{
				x[j] = x[j+1];
			}
			d--; 
			return true;
		}
		else
		return false;
	
}

void modifica(prodotto y,prodotto x[],int d)
{
	    int i = 0;
		cerca(y.nome, x, d, i);
		if(i != -1)
		{
			aggiungi(y,x,d,i);
		}
}

int main(int argc, char** argv) {
	
	prodotto supermercato[100],c;
    int v, d = 0,pr = 0;
    string al;
	do
	{
		int s = -1;
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
				aggiungi(c,supermercato,d,s);
				break;
				
			case 2:	
			 	
			    cout<<visualizza(supermercato,d);
			    break;
			    
			case 3:
			    cout<<"cosa vuoi cercare?\n";
			    cin>>c.nome;
			    cerca(c.nome,supermercato,d,s);
			    cout<<s<<"\n";
			    break;
			    
			case 4:
			 	cout<<"nome del prodotto da cancellare: ";
			 	cin>>c.nome;
				cancella(c.nome,supermercato,d);
			    break;
			    
			case 5:
			    cout<<"nome del prodotto da modificare:";
			    cin>>c.nome;
			    cout<<"inserisci il nuovo prezzo:";
			    cin>>c.prezzo;
			    modifica(c,supermercato,d);
				break;
			    
		}
		
		
	}while(v!=0);
	

	
	return 0;
}
