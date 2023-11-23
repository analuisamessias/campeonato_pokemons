#include "Campeonato.hpp"
#include "Treinador.hpp"

Campeonato::~Campeonato() {
    for (Treinador* treinador : _treinadores) {
        delete treinador;
    }
}

void Campeonato::cadastrar_treinador(std::string nome){
    Treinador* Novo_Treinador = new Treinador();
    Novo_Treinador->set_nome(nome);
    _treinadores.push_back(Novo_Treinador);
}

void Campeonato::cadastrar_pokemon_eletrico(int idt, std::string nome, std::string tipo_ataque, double forca_ataque, double potencia_raio){
    if(idt < 0){
        std::cout << "Erro: Treinador não encontrado" << std::endl;
    }
    _treinadores[idt]->cadastrar_pokemon_eletrico(nome, tipo_ataque, forca_ataque, potencia_raio);
}

void Campeonato::cadastrar_pokemon_aquatico(int idt, std::string nome, std::string tipo_ataque, double forca_ataque, double litros_jato) {
    if (idt < 0) {
        std::cout << "Erro: Treinador não encontrado." << std::endl;
        return;
    }
    _treinadores[idt]->cadastrar_pokemon_aquatico(nome, tipo_ataque, forca_ataque, litros_jato);
}

void Campeonato::cadastrar_pokemon_explosivo(int idt, std::string nome, std::string tipo_ataque, double forca_ataque, double temperatura_explosao) {
    if (idt < 0) {
        std::cout << "Erro: Treinador não encontrado." << std::endl;
        return;
    }
    _treinadores[idt]->cadastrar_pokemon_explosivo(nome, tipo_ataque, forca_ataque, temperatura_explosao);
}

void Campeonato::imprimir_informacoes_treinador(int idt) {
    if (idt < 0) {
        std::cout << "Erro: Treinador não encontrado." << std::endl;
        return;
    }
    Treinador* treinador = _treinadores[idt];
    std::cout << "Nome: " << treinador->get_nome() << std::endl;
    std::cout << "----------" << std::endl;
    treinador->imprimir_informacoes();
}

void Campeonato::executar_batalha(int idt1, int idpk1, int idt2, int idpk2) {
    if (idt1 < 0 || idt2 < 0) {
        std::cout << "Erro: Treinador não encontrado." << std::endl;
        return;
    }
    Treinador* Treinador1 = _treinadores[idt1];
    Treinador* Treinador2 = _treinadores[idt2];

    Pokemon* Pokemon1 = Treinador1->usar_pokemon(idpk1);
    Pokemon* Pokemon2 = Treinador2->usar_pokemon(idpk2);

    if (!Pokemon1 || !Pokemon2) {
        std::cout << "Erro: Pokemon não encontrado." << std::endl;
        return;
    }

    std::cout << "### Batalha ###" << std::endl;
    std::cout << Treinador1->get_nome() << " (" << Pokemon1->get_nome() << ") vs. "
              << Treinador2->get_nome() << " (" << Pokemon2->get_nome() << ")" << std::endl;

    Pokemon1->atacar(Pokemon2);
    double dano = Pokemon1->calcular_dano();
    double energia = Pokemon2->get_energia();

    std::cout << Pokemon2->get_nome() << "!" << std::endl;
    std::cout << "Energia: " << Pokemon2->get_energia() << std::endl;
    std::cout << "#########" << std::endl;
}
