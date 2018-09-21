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
    * Shows or hides video on profile page
    * @param {String} operation -- show or hide modal
  */
  manageProfileVideo(operation) {
    $('#modal_profile_video').modal(operation);
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

  /**
    * Performs operations to present css manipulation modal
  */
  operationCSSManipulation() {
    $('#modal_css_manipulation').modal('show');
  }

  /**
    * Performs operations to present profile modal
  */
  operationProfile() {
    $('#modal_profile').modal('show');
  }
}
