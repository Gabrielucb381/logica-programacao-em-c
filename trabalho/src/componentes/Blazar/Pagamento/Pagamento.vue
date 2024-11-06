<template>
  <div style="position: relative; top: 150px; right: 1200px" class="fatura">
    <form @submit.prevent="onSubmit">
      <a
        style="
          position: relative;
          top: 10px;
          left: 25px;
          font-size: 20px;
          font-weight: bold;
        "
        >Fatura #313233</a
      >
      <a
        style="
          color: #404040;
          opacity: 0.5;
          font-size: 20px;
          position: relative;
          top: 10px;
          left: 50px;
        "
        >(26/09/2024)</a
      >
      <br />
      <hr />
      <a
        style="
          font-size: 20px;
          color: #404040;
          opacity: 0.5;
          position: relative;
          left: 25px;
          bottom: 7px;
        "
        >Descrição</a
      >
      <a
        style="
          font-size: 20px;
          color: #404040;
          opacity: 0.5;
          position: relative;
          left: 390px;
          bottom: 7px;
        "
        >Valor</a
      >
      <hr style="position: relative; bottom: 15px" />
      <a
        style="
          position: relative;
          bottom: 22px;
          left: 25px;
          font-size: 20px;
          font-weight: bold;
        "
        >Plano Gold Anual</a
      >
      <a
        style="
          font-weight: bold;
          font-size: 20px;
          color: #000000;
          position: relative;
          left: 285px;
          bottom: 20px;
        "
        >R$ 549,90</a
      >
      <hr style="position: relative; bottom: 30px" />
      <a
        style="
          font-size: 20px;
          font-weight: bold;
          position: relative;
          bottom: 35px;
          left: 25px;
        "
        >Cupom de desconto:</a
      >
      <input
        style="
          background-color: transparent;
          border-color: rgb(113, 113, 113, 35%);
          border-radius: 5px;
          position: relative;
          left: 160px;
          bottom: 35px;
          width: 180px;
          height: 30px;
        "
        id="cupomDeDesconto"
        type="text"
        placeholder="Insira um código promocional"
      />
      <input
        type="submit"
        name="Aplicar"
        value="Aplicar"
        style="
          cursor: pointer;
          background-color: transparent;
          border-color: rgb(113, 113, 113, 35%);
          border-radius: 5px;
          height: 30px;
          position: relative;
          left: 158px;
          bottom: 35px;
        "
      />
      <hr style="position: relative; bottom: 45px" />
      <a
        style="
          font-size: 20px;
          color: #404040;
          opacity: 0.5;
          position: relative;
          bottom: 45px;
          left: 25px;
        "
        >Total a pagar</a
      >
      <a
        style="
          font-weight: bold;
          font-size: 20px;
          color: #0900b2;
          position: relative;
          left: 335px;
          bottom: 40px;
        "
        >R$ 549,90</a
      >

      <div
        style="position: relative; bottom: 420px; left: 700px"
        class="dadosDePagamento"
      >
        <form>
          <a
            style="
              position: relative;
              top: 10px;
              left: 170px;
              font-size: 20px;
              font-weight: bold;
            "
            >Dados de Pagamento</a
          >
          <label
            style="position: relative; right: 200px; top: 85px"
            for="CPFDoProprietárioDoCartao"
            >CPF do proprietário do cartão</label
          >
          <input
            style="position: relative; right: -1px; top: 95px"
            id="CPF"
            type="number"
          />
          <label
            style="position: relative; right: 412px; top: 145px"
            for="numeroDoCartao"
            >Número do cartão</label
          >
          <input
            style="position: relative; right: -1px; top: 125px"
            id="numeroDoCartao"
            type="number"
          />
          <label
            style="position: relative; right: 412px; top: 175px"
            for="nomeImpresso"
            >Nome impresso</label
          >
          <input
            style="position: relative; right: 0px; top: 155px"
            id="nomeImpressoNoCartao"
            type="text"
          />
          <label style="position: relative; right: 412px; top: 205px" for="CVV"
            >CVV</label
          >
          <input
            style="
              position: relative;
              right: -1px;
              top: 185px;
              width: 200px;
              height: 53px;
            "
            id="CVV"
            type="number"
          />
          <label
            style="position: relative; right: -13px; top: 140px"
            for="dataDeValidade"
            >Data de validade</label
          >
          <input
            style="
              position: relative;
              right: 107px;
              top: 185px;
              width: 200px;
              height: 53px;
            "
            id="dataDeValidade"
            type="number"
          />
          <input
            style="
              position: relative;
              left: 300px;
              width: 200px;
              height: 53px;
              background-color: #56aaff;
              top: 200px;
              cursor: pointer;
              font-weight: bold;
              font-size: 20px;
            "
            type="submit"
            name="Concluir"
            value="Concluir"
            @click="navegarParaObrigado"
          />
          <input
            style="
              position: relative;
              top: 198px;
              right: 200px;
              height: 20px;
              width: 20px;
              border-radius: 100px;
              background-color: black;
            "
            type="radio"
          />
          <a
            style="
              font-size: 20px;
              font-weight: bold;
              position: relative;
              top: 195px;
              right: 190px;
            "
            >Plano Gold</a
          >
        </form>
      </div>
    </form>
  </div>
</template>

<script>
import "./Pagamento.css";

export default {
  name: "Pagamento",
  methods: {
    async onSubmit() {
      try {
        const response = await this.enviarDadosParaAPI();
        if (response.success) {
          this.$router.push({ name: "TeladeObrigado" });
        } else {
          alert("Erro no pagamento: " + response.message);
        }
      } catch (error) {
        console.error("Erro ao processar o pagamento:", error);
        alert("Ocorreu um erro ao processar o pagamento. Tente novamente.");
      }
    },
  },
};
</script>

<style scoped></style>
