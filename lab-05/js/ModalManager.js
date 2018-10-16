/**
  * Class for managing all modals across pages
*/
class ModalManager {
  /**
    * Constructor
  */
  constructor() {

  }

  /**
    * Performs operations to present create user modal
  */
  operationCreateUser() {
    $('#modal_create_user').modal('show');
  }

  /**
    * Performs operations to present create post modal
  */
  operationCreatePost() {
    $('#modal_create_post').modal('show');
  }
}
