#ifndef POKEMON_HPP
#define POKEMON_HPP

#include <iostream>

class Pokemon{
private:
    std::string _nome;
    std::string _tipo_ataque;
    double _forca_ataque;
    double _energia = 100;
protected:
    double get_forca_ataque() const { return _forca_ataque; }
public:
    virtual ~Pokemon() = default;
    Pokemon(std::string nome, std::string tipo_ataque, double forca_ataque);
    void set_nome(std::string nome);
    std::string get_nome() const;
    double get_energia() const;
    std::string get_tipo_ataque() const;
    void falar_nome();
    virtual void falar_tipo_ataque() const;
    void imprimir_status();
    void imprimir_informacoes();
    virtual double calcular_dano() = 0;
    void atacar(Pokemon* outro_pokemon);
    void receber_dano(double valor_dano);
};

#endif // POKEMON_HPP
