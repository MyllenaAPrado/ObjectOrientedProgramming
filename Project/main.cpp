#include <string.h>
#include <stdexcept>
#include <iostream>

#include "curses.h"
#include "domains.h"
#include "interfaces.h"
#include "controladorasapresentacao.h"
#include "controladorasservico.h"
#include "stubs.h"

using namespace std;

int main()
{
    // Instancia as controladoras de apresentação.

    CntrApresentacaoControle *cntrApresentacaoControle;
    IApresentacaoAutenticacao *cntrApresentacaoAutenticacao;
    IApresentacaoPessoal *cntrApresentacaoPessoal;
    IApresentacaoProdutosFinanceiros *cntrApresentacaoProdutosFinanceiros;

    cntrApresentacaoControle = new CntrApresentacaoControle();
    cntrApresentacaoAutenticacao = new CntrApresentacaoAutenticacao();
    cntrApresentacaoPessoal = new CntrApresentacaoPessoal();
    cntrApresentacaoProdutosFinanceiros = new CntrApresentacaoProdutosFinanceiros();

    // Instancia os stubs de serviço.

    IServicoAutenticacao *stubServicoAutenticacao;
    IServicoPessoal *stubServicoPessoal;
    IServicoProdutosFinanceiros *stubServicoProdutosFinanceiros;

    stubServicoAutenticacao = new CntrServicoAutenticacao();
    stubServicoPessoal = new StubServicoPessoal();
    stubServicoProdutosFinanceiros = new StubServicoProdutosFinanceiros();

    // Interliga as controladoras aos stubs.

    cntrApresentacaoControle->setCntrApresentacaoAutenticacao(cntrApresentacaoAutenticacao);
    cntrApresentacaoControle->setCntrApresentacaoPessoal(cntrApresentacaoPessoal);
    cntrApresentacaoControle->setCntrApresentacaoProdutosFinanceiros(cntrApresentacaoProdutosFinanceiros);

    cntrApresentacaoAutenticacao->setCntrServicoAutenticacao(stubServicoAutenticacao);

    cntrApresentacaoPessoal->setCntrServicoPessoal(stubServicoPessoal);
    cntrApresentacaoPessoal->setCntrServicoProdutosFinanceiros(stubServicoProdutosFinanceiros);

    cntrApresentacaoProdutosFinanceiros->setCntrServicoProdutosFinanceiros(stubServicoProdutosFinanceiros);

    initscr();                                                                     // Inicia curses.
    cntrApresentacaoControle->executar();                                           // Solicita serviço apresentacao.
    endwin();                                                                       // Finaliza curses.

    return 0;
}

