const form = document.getElementById("ContainerForm");
const divMensagem = document.getElementById("mensagem");

form.addEventListener("submit", function (evento) {
  evento.preventDefault();

  const nomeDigitado = document.getElementById("nome").value;
  const emaillDigitado = document.getElementById("email").value;
  const senhaDigitada = document.getElementById("senha").value;

  if (senhaDigitada.length < 6) {
    divMensagem.style.color = "red";
    divMensagem.textContent = "A senha Deve conter 6 digitos";
    return;
  }

  const dadosUsuario = {
    nome: nomeDigitado,
    emaill: emaillDigitado,
    senha: senhaDigitada,
  };

  console.log(
    "Dados enviado com sucesso para o backend",
    JSON.stringify(dadosUsuario),
  );

  divMensagem.style.color = "green";
  divMensagem.textContent = "Cadastro realizado com sucesso, Bem-Vindo!";

  form.reset();
});
