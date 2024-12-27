# Embarcatech-Conversor de Unidades

Este projeto é um conversor de unidades desenvolvido em C, que permite converter valores entre diferentes unidades de medida.

## Funcionalidades

1. Unidades de comprimento (metro, centímetro, milímetro)
2. Unidades de massa (quilograma, grama, tonelada)
3. Unidades de volume (litro, mililitro, metros cúbicos)
4. Unidades de temperatura (Celsius, Fahrenheit, Kelvin)
5. Unidades de velocidade (km/h, m/s, mph)
6. Watts (W), quilowatts (kW), cavalos-vapor (cv ou hp)
7. Unidades de área (metro quadrado, centímetro quadrado)
8. Unidades de tempo (segundos, minutos, horas)
9. Bits, bytes, kilobytes (KB), megabytes (MB), gigabytes (GB), terabytes (TB)
10. Cálculo do índice de massa corporal (IMC)

## Pré-requisitos

Para compilar e executar este projeto no Visual Studio Code (VSCode), você precisará:

- [Visual Studio Code](https://code.visualstudio.com/) instalado.
- [Extensão C/C++](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) da Microsoft instalada no VSCode.
- [MinGW](http://www.mingw.org/) instalado e configurado no seu sistema.

## Configuração do Ambiente

1. **Instalar o MinGW:**

   - Baixe o instalador do MinGW.
   - Durante a instalação, selecione os pacotes `mingw32-base` e `mingw32-gcc-g++`.
   - Após a instalação, adicione o caminho `C:\MinGW\bin` às variáveis de ambiente do sistema.

2. **Configurar o VSCode:**

   - Abra o VSCode e instale a extensão C/C++ da Microsoft.
   - Instale a extensão [Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner) para facilitar a execução do código.
   - No arquivo `settings.json` do VSCode, adicione ou modifique as seguintes configurações:

     ```json
     {
       "code-runner.executorMap": {
         "c": "gcc $fileName -o $fileNameWithoutExt && $fileNameWithoutExt"
       },
       "code-runner.runInTerminal": true,
       "code-runner.clearPreviousOutput": true,
       "code-runner.saveFileBeforeRun": true
     }
     ```

   - Certifique-se de que o terminal integrado do VSCode esteja configurado para usar o `cmd.exe`.

## Clonando o Repositório

Para obter o código-fonte do projeto, clone o repositório do GitHub:

```bash
git clone https://github.com/ViniciusLemosDev/Embarcatech_Conversor.git
```

## Compilando e Executando o Projeto

1. **Abrir o Projeto no VSCode:**

   - Abra o VSCode e selecione a pasta do projeto clonada.

2. **Compilar o Código:**

   - Abra o arquivo principal do projeto (`main.c`).
   - Pressione `Ctrl + Alt + N` para compilar e executar o código usando o Code Runner.

3. **Executar o Programa:**

   - Após a compilação, o programa será executado no terminal integrado do VSCode.
   - Siga as instruções exibidas para realizar as conversões desejadas.

## Recursos Adicionais

Para uma configuração mais detalhada e visual, você pode assistir ao seguinte vídeo:

[Configurar o Visual Studio Code para compilar e executar C/C++](https://www.youtube.com/watch?v=aXVzbzwZuYc)

