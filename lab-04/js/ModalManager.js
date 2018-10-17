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
    * Performs operations to present modal
  */
  operationQuiz() {
    $('#modal_quiz').modal('show');
  }

  /**
    * Performs operations to present modal
  */
  operationFrontend() {
    $('#modal_customer_frontend').modal('show');
  }

}
