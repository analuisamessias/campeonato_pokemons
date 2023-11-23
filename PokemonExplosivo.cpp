#include "PokemonExplosivo.hpp"

PokemonExplosivo::PokemonExplosivo(std::string nome, std::string tipo_ataque, double forca_ataque, double temperatura_explosao)
:Pokemon(nome, tipo_ataque, forca_ataque), _temperatura_explosao(temperatura_explosao) {}

void PokemonExplosivo::falar_tipo_ataque()const{
    std::cout << "Boom!" << std::endl;
}

double PokemonExplosivo::calcular_dano(){
    return ataque_explosivo();
}

double PokemonExplosivo::ataque_explosivo(){
    return get_forca_ataque()/_temperatura_explosao;
}
