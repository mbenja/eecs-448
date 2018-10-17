/**
  * Declaration of modal manager instance
*/
const modal_manager = new ModalManager();

/**
  * Call for css manipulation modal to be presented
*/
//$('#modal_create_post').modal('show');
modal_manager.operationFrontend();

/**
  * Validates form data before sending to back end
*/
function validate() {
  // get input
  const email = document.getElementById('input_email').value.toLowerCase();
  const pass = document.getElementById('input_password').value;
  const bananas = document.getElementById('input_bananas').value;
  const apples = document.getElementById('input_apples').value;
  const oranges = document.getElementById('input_oranges').value;

  // validate
  var error = false;
  var regex = /[^\s@]+@[^\s@]+\.[^\s@]+/;
  error = !regex.test(email);
  if (pass.length == 0) {
    error = true;
  }
  if (bananas.includes('e') || bananas.includes('-') || bananas < 0) {
    error = true;
  }
  if (apples.includes('e') || apples.includes('-') || apples < 0) {
    error = true;
  }
  if (oranges.includes('e') || oranges.includes('-') || oranges < 0) {
    error = true;
  }

  var is_checked = false;
  for (var i = 1; i < 4; i++) {
    if (document.getElementById('inlineRadio' + i).checked) {
      is_checked = true;
    }
  }
  if (!is_checked) {
    error = true;
  }

  // present error if true
  if (error === true) {
    $('#modal_error').modal('show');
    return false;
  }
}
