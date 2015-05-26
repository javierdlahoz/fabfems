(function ($) {

  Drupal.behaviors.abBeautyTips = {
    attach: function (context, settings) {
      // Apply the tooltip to all fields that have a description and a label
      $('.form-item', context).has('.description').once('ab-beautytips', function () {
        var item_label = $(this).children('label:first'),
            item_desc = $(this).children('.description:first'),
            tooltip_trigger = $('<div class="ab-beautytips-trigger"></div>');
        
        if ($(item_label).length && $(item_desc).length) {
          $(item_label).append(tooltip_trigger)
          $(item_desc).hide();
        }
        
        Drupal.attachBehaviors(this);
      });
    }
  };

})(jQuery);