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
    * Shows or hides bad password entry based off of parameter
    * @param {String} operation -- show or hide modal
  */
  manageBadPassword(operation) {
    $('#modal_bad_password').modal(operation);
  }

  /**
    * Shows or hides good password entry based off parameter
    * @param {String} operation -- show or hide modal
  */
  manageGoodPassword(operation) {
    $('#modal_good_password').modal(operation);
  }

  /**
    * Performs operations to present password form modal
  */
  operationPasswordForm() {
    $('#modal_password_form').modal('show');
  }

  /**
    * Performs operations to present slideshow modal
  */
  operationSlideshow() {
    $('#modal_slideshow').modal('show');
  }
}
