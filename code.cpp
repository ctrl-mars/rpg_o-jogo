#include <iostream>
#include <string>

using namespace std;

int main() {
	
	        	getchar();
        	system("color 25");

    int escolha;
    bool continuar = true;  // isso aq funciona como um loop mas ta errado saiba mais na linha 84

    while (continuar) {
    
        // mano achei esse trem aq que reseta o terminal p n ficar tud embolado
        #ifdef _WIN32
            system("cls");  // apenas windows
        #else
            system("clear");  // esse aq eh pra funcionar no mac e no linux
        #endif
        
        cout << "voce esta perdido no meio da floresta o que voce faz???\n"; // vou separar a pergunta do texto dps
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "| 1) sentar e chorar    |\n"; 
        cout << "| 2) checar seus bolsos |\n"; 
        cout << "| 3) continuacao do jog |\n"; 
        cout << "~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "-" << endl;
        cout << "RPG / GFLMR \n"; // nome do jogo / participantes mas pode ser numero de pÃ¡gina ou da ate p remover se n quiserem

        cin >> escolha;

        #ifdef _WIN32
            system("cls"); 
        #else
            system("clear"); 
        #endif

        if (escolha == 1) {
            cout << "chorar n vai adiantar supera\n";
        } else if (escolha == 2) {
            cout << "barrinha de mo\n";
            cout << "o que voce faz\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "| 1) comer            |\n";  
            cout << "| 2) guardar          |\n";  
            cout << "~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "-" << endl;
            cout << "RPG / GFLMR\n"; 

            cin >> escolha;

            #ifdef _WIN32
                system("cls");
            #else
                system("clear");
            #endif

            if (escolha == 1) {
                cout << "voce se sente restaurado\n";
            } else if (escolha == 2) {
                cout << "hm vou deixar para depois\n";
            }
        } else if (escolha == 3) {

            cout << "ao seguir a trilha voce blabla la\n";
            cout << "final da trilha lago banho\n";
            cout << "voce entra no lago??\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "| 1) sim               |\n";
            cout << "| 2) nao               |\n";
            cout << "~~~~~~~~~~~~~~~~~~~~~~~\n";
            cout << "-" << endl;
            cout << "RPG / GFLMR\n";

            cin >> escolha;

            #ifdef _WIN32
                system("cls");
            #else
                system("clear");
            #endif

            if (escolha == 1) {
                cout << "continuacao do jogo\n"; 
				// continua o jogo mas vamo focar nessa parte aq primeiro
            } else if (escolha == 2) {
                cout << "vc sente q tem q entrar no lago \n"; 
				/* volta pra pergunta mas por enquanto
                ta voltando pra pergunta la  de cima nao sei como
				fazer com que ele volte pra pergunta
                anterior*/
            }
        }
        
        
        
        

        // autoexplkcativo!!@
        cout << "-" << endl;
        cout << "continuar? (1 para sim, 0 para nao)\n";
        cout << "-" << endl;
        
        cin >> continuar;

        //  cabou mas ficaria legal se o terminal fechasse sozinho ao inves disso
        if (!continuar) {
            #ifdef _WIN32
                system("cls");
            #else
                system("clear");
            #endif
            cout << "jogo encerrado\n";  
        }
    }





    return 0;
}