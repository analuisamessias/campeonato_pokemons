#ifndef POKEMONEXPLOSIVO_HPP
#define POKEMONEXPLOSIVO_HPP
#include "Pokemon.hpp"
#include <iostream>

class PokemonExplosivo:public Pokemon{
private:
    double _temperatura_explosao;
public:
    PokemonExplosivo(std::string nome, std::string tipo_ataque, double forca_ataque, double temperatura_explosao);
    virtual ~PokemonExplosivo() = default;
    PokemonExplosivo(double energia);
    void falar_tipo_ataque() const override;
    double calcular_dano();
    double ataque_explosivo();
    double get_energia() const;
};
#endif //POKEMONEXPLOSIVO_HPP
