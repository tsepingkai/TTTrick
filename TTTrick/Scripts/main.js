require('UIView, UIImageView');
defineClass('TTTrickView', {
            addTimerAction: function() {
            console.log("addTimerAction")
            // Get images
//            var head = self.getImageWithPath('image/meteor_head')
//            var tail = self.getImageWithPath('image/meteor_tail')
            var animationView = MeteorAnimationView.alloc().init();
//            var width = self.getWidth() - arc4random() % (self.getWidth() / 2);
//            var height = arc4random() % (self.getHeight() / 2);
//
            
            
            animationView.loadView();
            self.addSubview(animationView);
            animationView.start(300);
        }
    }
)