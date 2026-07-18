# Next2350 Development Environment

> [!WARNING]
> A **Next2350** ainda está em fase de desenvolvimento.
>
> O projeto eletrônico da placa já foi concebido, porém os primeiros protótipos físicos ainda não foram fabricados. Este repositório reúne o ambiente de desenvolvimento utilizado para preparar o software que acompanhará a placa quando o hardware estiver disponível.

---

## Sobre

Bem-vindo ao ambiente oficial de desenvolvimento da **Next2350**, a futura placa programável desenvolvida pela **NextBoard**.

Este repositório centraliza o desenvolvimento do firmware, drivers, bibliotecas, exemplos e ferramentas que serão utilizados durante a validação e evolução da placa.

Como o desenvolvimento do software acontece em paralelo ao desenvolvimento do hardware, parte do código aqui presente pode estar incompleta, sofrer alterações frequentes ou depender de recursos que ainda não podem ser testados em um protótipo físico.

---

## Objetivos deste repositório

O ambiente de desenvolvimento tem como foco preparar toda a infraestrutura de software da Next2350, incluindo:

- Firmware base da placa.
- Drivers para os periféricos embarcados.
- Bibliotecas reutilizáveis.
- Exemplos de utilização.
- Testes de integração.
- Ferramentas de desenvolvimento.
- Código que será utilizado durante a validação dos primeiros protótipos.

---

## Hardware

A Next2350 é uma plataforma embarcada desenvolvida pela **NextBoard**, baseada no microcontrolador **RP2354B**.

### Especificações previstas

- **Microcontrolador:** RP2354B
- **Display:** Touchscreen com controlador ILI9341
- **Armazenamento:** Flash integrada
- **Comunicação:** SPI, I²C e UART
- **Expansão:** *(Em definição)*

As especificações podem sofrer alterações até a fabricação da primeira revisão da placa.

---

## Estado do projeto

| Componente | Status |
|------------|--------|
| 📐 Projeto eletrônico | ✅ Concluído |
| 💻 Ambiente de desenvolvimento | 🚧 Em desenvolvimento |
| 📚 Drivers | 🚧 Em desenvolvimento |
| 🔬 Testes em hardware | ⏳ Aguardando protótipo físico |
| 🛠️ Produção dos protótipos | ⏳ Pendente |

---

## Aviso

Este repositório representa um projeto em evolução.

Mudanças na API, estrutura do código, drivers e organização do projeto são esperadas durante o desenvolvimento da Next2350.

Até que o primeiro hardware esteja disponível, parte do código será desenvolvida com base nas especificações do projeto eletrônico.

---

## Contribuindo

Sugestões, correções e melhorias são sempre bem-vindas.

Caso encontre algum problema ou tenha uma ideia para o projeto, abra uma **Issue** descrevendo a situação com o máximo de detalhes possível.

---

## Licença

Este projeto é mantido pela **NextBoard Organization**.

Licença: Apache 2.0
