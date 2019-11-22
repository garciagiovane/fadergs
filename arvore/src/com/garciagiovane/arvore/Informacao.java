package com.garciagiovane.arvore;

public class Informacao {

    private Integer codigo;
    private String pergunta;
    private String resposta;

    public Informacao() {}

    public Informacao(Integer codigo, String pergunta, String resposta) {
        this.codigo = codigo;
        this.pergunta = pergunta;
        this.resposta = resposta;
    }

    public Integer getCodigo() {
        return codigo;
    }

    public void setCodigo(Integer codigo) {
        this.codigo = codigo;
    }

    public String getPergunta() {
        return pergunta;
    }

    public void setPergunta(String pergunta) {
        this.pergunta = pergunta;
    }

    public String getResposta() {
        return resposta;
    }

    public void setResposta(String resposta) {
        this.resposta = resposta;
    }
}
