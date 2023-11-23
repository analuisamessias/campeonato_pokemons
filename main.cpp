#include <iostream>
#include <vector>
#include "Pokemon.hpp"
#include "Treinador.hpp"
#include "Campeonato.hpp"
#include "avaliacao_basica_pokemon.hpp"


int main()
{
    Campeonato Campeonato_Pokemons;
    char Comando;
    while(std::cin >> Comando){
        if(Comando == 't'){
            std::string nome;
            std::cin >> nome;
            Campeonato_Pokemons.cadastrar_treinador(nome);
        }
        else if(Comando == 'i'){
            int idt;
            std::cin >> idt;
            Campeonato_Pokemons.imprimir_informacoes_treinador(idt);
        }
        else if(Comando == 'e'){
            int idt;
            std::string nome;
            std::string tipo_ataque;
            double forca_ataque;
            double potencia_raio;
            std::cin >> idt >> nome >> tipo_ataque >> forca_ataque >> potencia_raio;
            Campeonato_Pokemons.cadastrar_pokemon_eletrico(idt, nome, tipo_ataque, forca_ataque, potencia_raio);
        }
        else if(Comando == 'q'){
            int idt;
            std::string nome;
            std::string tipo_ataque;
            double forca_ataque;
            double litros_jato;
            std::cin >> idt >> nome >> tipo_ataque >> forca_ataque >> litros_jato;
            Campeonato_Pokemons.cadastrar_pokemon_aquatico(idt, nome, tipo_ataque, forca_ataque, litros_jato);
        }
        else if(Comando == 'x'){
            int idt;
            std::string nome;
            std::string tipo_ataque;
            double forca_ataque;
            double temperatura_explosao;
            std::cin >> idt >> nome >> tipo_ataque >> forca_ataque >> temperatura_explosao;
            Campeonato_Pokemons.cadastrar_pokemon_explosivo(idt, nome, tipo_ataque, forca_ataque, temperatura_explosao);
        }
        else if(Comando == 'h'){
            int idt1, idpk1, idt2, idpk2;
            std::cin >> idt1 >> idpk1 >> idt2 >> idpk2;
            Campeonato_Pokemons.executar_batalha(idt1, idpk1, idt2, idpk2);
        }
        else if(Comando == 'b'){
            avaliacao_basica();
        }
        else{
            std::cout << "Invalido" << std::endl;
            break;
        }
    }

    return 0;
}
