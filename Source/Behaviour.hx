package;

import openfl.geom.Point;
import openfl.events.Event;
import openfl.display.Sprite;

// not in use (will probably never be used tbh, imagine copying unity lol)

// I ended up using it as a universal utility function thing :\

class Behaviour extends Sprite {

    public function new() {
        
        super();
        this.addEventListener(Event.ENTER_FRAME, update);

    }

    function update(e:Event) {}

    function point(x:Float = 0, y:Float = 0) { return new Point(x, y); }

    //operations
    /**
     * Adds p1 + p2
     * @param p1 Point
     * @param p2 Point
     */
    overload extern inline function pointAdd(p1:Point, p2:Point) { return new Point( Math.round((p1.x + p2.x)*100)/100, Math.round((p1.y + p2.y)*100)/100); }
    
    /**
     * Substracts p1 - p2
     * @param p1 Point
     * @param p2 Point
     */
    overload extern inline function pointSubstract(p1:Point, p2:Point) { return new Point( Math.round((p1.x - p2.x)*100)/100, Math.round((p1.y - p2.y)*100)/100); }
    
    /**
     * Multiplies p1 * p2
     * @param p1 Point
     * @param p2 Point
     */
    overload extern inline function pointMultiply(p1:Point, p2:Point) { return new Point( Math.round((p1.x * p2.x)*100)/100, Math.round((p1.y * p2.y)*100)/100); }
    
    /**
     * Divides p1 / p2
     * @param p1 Point
     * @param p2 Point
     */
    overload extern inline function pointDivide(p1:Point, p2:Point) { return new Point( Math.round((p1.x / p2.x)*100)/100, Math.round((p1.y / p2.y)*100)/100); }
    
        
    overload extern inline function pointAdd(p:Point, f:Float) { return new Point( Math.round((p.x + f)*100)/100, Math.round((p.y + f)*100)/100); }
    
    overload extern inline function pointSubstract(p:Point, f:Float) { return new Point( Math.round((p.x - f)*100)/100, Math.round((p.y - f)*100)/100); }
        
    overload extern inline function pointMultiply(p:Point, f:Float) { return new Point( Math.round((p.x * f)*100)/100, Math.round((p.y * f)*100)/100); }
    
    overload extern inline function pointDivide(p:Point, f:Float) { return new Point( Math.round((p.x / f)*100)/100, Math.round((p.y / f)*100)/100); }

    public function getObjectByName(a:Array<GameObject>, n:String):GameObject {
        
        var g:GameObject = null;
        for (i in 0...a.length) {

            if (a[i]._name == n)
                g = a[i];

        }
        
        return g;

    }

    public function getChildObjectByName(o:GameObject, n:String):GameObject {
        
        var g:GameObject = null;
        for (i in 0...o.children.length) {

            if (o.children[i]._name == n)
                g = o.children[i];

        }
        
        return g;

    }

}