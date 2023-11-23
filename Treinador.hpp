#ifndef TREINADOR_HPP
#define TREINADOR_HPP
#include <iostream>
#include <vector>
#include "Pokemon.hpp"

class Treinador{
private:
    std::string _nome;
    std::vector<Pokemon*> _pokemons;
public:
    Treinador();
    void set_nome(std::string nome);
    std::string get_nome() const;
    void cadastrar_pokemon_eletrico(std::string nome, std::string tipo_ataque, double forca_ataque, double potencia_raio);
    void cadastrar_pokemon_aquatico(std::string nome, std::string tipo_ataque, double forca_ataque, double litros_jato);
    void cadastrar_pokemon_explosivo(std::string nome, std::string tipo_ataque, double forca_ataque, double temperatura_explosao);
    Pokemon* usar_pokemon(int idpk);
    void imprimir_informacoes();
};

#endif // TREINADOR_HPP
