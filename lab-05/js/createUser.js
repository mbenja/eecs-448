/**
  * Declaration of modal manager instance
*/
const modal_manager = new ModalManager();

/**
  * Call for css manipulation modal to be presented
*/
modal_manager.operationCreateUser();

/**
  * Handles submission of create user form
  * Presents success and error modals accordingly
*/
function createUser() {
  $.ajax({
      type: "POST",
      url: "../php/createUser.php",
      success: function(data) {
          console.log(data);
      }
  });
}
