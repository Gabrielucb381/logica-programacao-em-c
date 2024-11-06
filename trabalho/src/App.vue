<template>
  <div class="tudo">
    <Blazar />
    <CampoTexto />
  </div>
</template>

<script>
import Blazar from "./componentes/Blazar/Blazar.vue";
import CampoTexto from "./componentes/Blazar/CampoDeTexto/CampoTexto.vue";
import Pagamento from "./componentes/Blazar/Pagamento/Pagamento";
import Solicitacao from "./componentes/Blazar/Solicitacao/Solicitacao";

export default {
  components: {
    Blazar,
    CampoTexto,
  },
};
</script>

<style scoped>
@import "./index.css";
</style>
