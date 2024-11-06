<template>
  <div style="position: relative; top: 150px" class="container">
    <a
      style="
        font-size: 20px;
        font-weight: bold;
        align-items: center;
        white-space: nowrap;
        position: relative;
        top: 30px;
        left: 460px;
      "
    >
      A sua solicitação foi concluída!<br />
    </a>
    <a
      style="
        position: relative;
        top: 60px;
        left: 110px;
        font-size: 20px;
        font-weight: bold;
        align-items: center;
        white-space: nowrap;
      "
    >
      Você receberá um email com o link de teste.
    </a>
    <a
      style="
        position: relative;
        top: 520px;
        right: 145px;
        font-weight: bold;
        font-size: 20px;
      "
      >Aguarde!!!</a
    >

    <div style="position: relative; top: 600px; right: 400px" class="voltar">
      <a style="position: relative; left: 170px">Voltar</a>
    </div>
  </div>
</template>

<script>
import "./Solicitacao.css";

export default {
  name: "Solicitacao",
};
</script>

<style scoped></style>
