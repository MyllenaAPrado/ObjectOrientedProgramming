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
    // Instancia as controladoras de apresenta��o.

    CntrApresentacaoControle *cntrApresentacaoControle;
    IApresentacaoAutenticacao *cntrApresentacaoAutenticacao;
    IApresentacaoPessoal *cntrApresentacaoPessoal;
    IApresentacaoProdutosFinanceiros *cntrApresentacaoProdutosFinanceiros;

    cntrApresentacaoControle = new CntrApresentacaoControle();
    cntrApresentacaoAutenticacao = new CntrApresentacaoAutenticacao();
    cntrApresentacaoPessoal = new CntrApresentacaoPessoal();
    cntrApresentacaoProdutosFinanceiros = new CntrApresentacaoProdutosFinanceiros();

    // Instancia os stubs de servi�o.

    IServicoAutenticacao *cntrServicoAutenticacao;
    IServicoPessoal *stubServicoPessoal;
    IServicoProdutosFinanceiros *stubServicoProdutosFinanceiros;

    cntrServicoAutenticacao = new CntrServicoAutenticacao();
    stubServicoPessoal = new CntrServicoPessoal();
    stubServicoProdutosFinanceiros = new CntrServicoProdutosFinanceiros();

    // Interliga as controladoras aos stubs.

    cntrApresentacaoControle->setCntrApresentacaoAutenticacao(cntrApresentacaoAutenticacao);
    cntrApresentacaoControle->setCntrApresentacaoPessoal(cntrApresentacaoPessoal);
    cntrApresentacaoControle->setCntrApresentacaoProdutosFinanceiros(cntrApresentacaoProdutosFinanceiros);

    cntrApresentacaoAutenticacao->setCntrServicoAutenticacao(cntrServicoAutenticacao);

    cntrApresentacaoPessoal->setCntrServicoPessoal(stubServicoPessoal);
    cntrApresentacaoPessoal->setCntrServicoProdutosFinanceiros(stubServicoProdutosFinanceiros);

    cntrApresentacaoProdutosFinanceiros->setCntrServicoProdutosFinanceiros(stubServicoProdutosFinanceiros);

    initscr();                                                                     // Inicia curses.
    cntrApresentacaoControle->execute();                                           // Solicita servi�o apresentacao.
    endwin();                                                                       // Finaliza curses.

    return 0;
}

