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
    * Shows or hides bad password entry based off of paramater
    * @param {Bool} is_good_entry -- user provided good entry
    * @param {String} operation -- show or hide modal
  */
  managePasswordEntry(is_good_entry, operation) {
    if (is_good_entry) {
      $('#modal_good_password').modal(operation);
    } else {
      $('#modal_bad_password').modal(operation);
    }
  }
}
