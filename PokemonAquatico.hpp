#ifndef POKEMONAQUATICO_HPP
#define POKEMONAQUATICO_HPP
#include "Pokemon.hpp"

#include <iostream>

class PokemonAquatico:public Pokemon{
private:
    double _litros_jato;
public:
    PokemonAquatico(std::string nome, std::string tipo_ataque, double forca_ataque, double litros_jato);
    virtual ~PokemonAquatico() = default;
    PokemonAquatico(double energia);
    void falar_tipo_ataque() const override;
    double calcular_dano();
    double ataque_aquatico();
    double get_energia() const;
};


#endif //POKEMONAQUATICO_HPP
