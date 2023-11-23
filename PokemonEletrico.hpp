#ifndef POKEMONELETRICO_HPP
#define POKEMONELETRICO_HPP
#include "Pokemon.hpp"
#include <iostream>

class PokemonEletrico:public Pokemon{
private:
    double _potencia_raio;
public:
    PokemonEletrico(std::string nome, std::string tipo_ataque, double forca_ataque, double potencia_raio);
    virtual ~PokemonEletrico() = default;
    PokemonEletrico(double energia);
    void falar_tipo_ataque() const override;
    double calcular_dano();
    double ataque_eletrico();
    double get_energia() const;
};


#endif // POKEMONELETRICO_HPP
