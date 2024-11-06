import { createRouter, createWebHistory } from "vue-router";
import CampoTexto from "../componentes/Blazar/CampoDeTexto/CampoTexto.vue";
import Pagamento from "../componentes/Blazar/Pagamento/Pagamento.vue";
import TeladeObrigado from "../componentes/Blazar/TelaDeObrigado/TeladeObrigado.vue";

const routes = [
  {
    path: "/",
    name: "CampoTexto",
    component: CampoTexto,
  },
  {
    path: "/pagamento",
    name: "Pagamento",
    component: Pagamento.vue,
  },
  {
    path: "/obrigado",
    name: "TeladeObrigado",
    component: TeladeObrigado,
  },
];

const router = createRouter({
  history: createWebHistory(),
  routes,
});

export default router;
