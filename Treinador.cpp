#include "Treinador.hpp"
#include "PokemonEletrico.hpp"
#include "PokemonAquatico.hpp"
#include "PokemonExplosivo.hpp"

Treinador::Treinador() {
    _nome = "";
}

void Treinador::set_nome(std::string nome) {
    _nome = nome;
}

std::string Treinador::get_nome() const {
    return _nome;
}

void Treinador::cadastrar_pokemon_eletrico(std::string nome, std::string tipo_ataque, double forca_ataque, double potencia_raio) {
    PokemonEletrico* novo_pokemon = new PokemonEletrico(nome, tipo_ataque, forca_ataque, potencia_raio);
    _pokemons.push_back(novo_pokemon);
}

void Treinador::cadastrar_pokemon_aquatico(std::string nome, std::string tipo_ataque, double forca_ataque, double litros_jato) {
    PokemonAquatico* novo_pokemon = new PokemonAquatico(nome, tipo_ataque, forca_ataque, litros_jato);
    _pokemons.push_back(novo_pokemon);
}

void Treinador::cadastrar_pokemon_explosivo(std::string nome, std::string tipo_ataque, double forca_ataque, double temperatura_explosao) {
    PokemonExplosivo* novo_pokemon = new PokemonExplosivo(nome, tipo_ataque, forca_ataque, temperatura_explosao);
    _pokemons.push_back(novo_pokemon);
}

void Treinador::imprimir_informacoes(){
    if(_pokemons.empty()){
        std::cout << "Nenhum Pokemon cadastrado!" <<std::endl;
        std::cout << "----------" << std::endl;
    }
    else{
        for(int i = 0; i < _pokemons.size(); i++) {
            _pokemons[i]->imprimir_informacoes();
            std::cout << "----------" << std::endl;
        }
    }
}

Pokemon* Treinador::usar_pokemon(int idpk) {
    if (idpk >= 0 && idpk < _pokemons.size()) {
        return _pokemons[idpk];
    } else {
        std::cout << "Erro: Pokemon não encontrado." << std::endl;
        return nullptr;
    }
}
