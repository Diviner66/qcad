// ***** AUTOGENERATED CODE, DO NOT EDIT *****
            // ***** This class is not copyable.
        
        #include "REcmaLinetypeList.h"
        #include "RMetaTypes.h"
        #include "../REcmaHelper.h"

        // forwards declarations mapped to includes
        
            
        // includes for base ecma wrapper classes
         void REcmaLinetypeList::initEcma(QScriptEngine& engine, QScriptValue* proto 
    
    ) 
    
    {

    bool protoCreated = false;
    if(proto == NULL){
        proto = new QScriptValue(engine.newVariant(qVariantFromValue(
                (RLinetypeList*) 0)));
        protoCreated = true;
    }

    

    QScriptValue fun;

    // toString:
    REcmaHelper::registerFunction(&engine, proto, toString, "toString");
    

    // destroy:
    REcmaHelper::registerFunction(&engine, proto, destroy, "destroy");
    

    // get class name
    REcmaHelper::registerFunction(&engine, proto, getClassName, "getClassName");
    

    // conversion to all base classes (multiple inheritance):
    REcmaHelper::registerFunction(&engine, proto, getBaseClasses, "getBaseClasses");
    

    // properties:
    

    // methods:
    
        engine.setDefaultPrototype(
            qMetaTypeId<RLinetypeList*>(), *proto);

        
    

    QScriptValue ctor = engine.newFunction(createEcma, *proto, 2);
    
    // static methods:
    
            REcmaHelper::registerFunction(&engine, &ctor, init, "init");
            

    // static properties:
    

    // enum values:
    

    // enum conversions:
    
        
    // init class:
    engine.globalObject().setProperty("RLinetypeList",
    ctor, QScriptValue::SkipInEnumeration);
    
    if( protoCreated ){
       delete proto;
    }
    
    }
     QScriptValue REcmaLinetypeList::createEcma(QScriptContext* context, QScriptEngine* engine) 
    
    {
    if (context->thisObject().strictlyEquals(
       engine->globalObject())) {
       return REcmaHelper::throwError(
       QString::fromLatin1("RLinetypeList(): Did you forget to construct with 'new'?"),
           context);
    }

    QScriptValue result;
    
            // constructor without variants:
            
    if( context->argumentCount() ==
        0
    ){
    // prepare arguments:
    
    // end of arguments

    // call C++ constructor:
    
            // non-copyable class:
            RLinetypeList
                    * cppResult =
                    new
                    RLinetypeList
                    ();
                
                    // TODO: triggers: Warning: QScriptEngine::newVariant(): changing class of non-QScriptObject not supported:
                    result = engine->newVariant(context->thisObject(), qVariantFromValue(cppResult));
                
    } else 

    {
       return REcmaHelper::throwError(
       QString::fromLatin1("RLinetypeList(): no matching constructor found."),
           context);
    }
    
    return result;
    }
    

    // conversion functions for base classes:
    

    // returns class name:
     QScriptValue REcmaLinetypeList::getClassName(QScriptContext *context, QScriptEngine *engine) 
        
    {
        return qScriptValueFromValue(engine, QString("RLinetypeList"));
    }
    

    // returns all base classes (in case of multiple inheritance):
     QScriptValue REcmaLinetypeList::getBaseClasses(QScriptContext *context, QScriptEngine *engine) 
        
    {
        QStringList list;
        

        return qScriptValueFromSequence(engine, list);
    }
    

    // properties:
    

    // public methods:
     QScriptValue
        REcmaLinetypeList::init
        (QScriptContext* context, QScriptEngine* engine) 
        
        {
            REcmaHelper::functionStart("REcmaLinetypeList::init", context, engine);
            //qDebug() << "ECMAScript WRAPPER: REcmaLinetypeList::init";
            //QCoreApplication::processEvents();

            QScriptValue result = engine->undefinedValue();
            
    
    if( context->argumentCount() ==
    2 && (
            context->argument(0).isBool()
        ) /* type: bool */
     && (
            context->argument(1).isVariant() || 
            context->argument(1).isQObject() || 
            context->argument(1).isNull()
        ) /* type: RResourceList < RLinetypePattern > */
    
    ){
    // prepare arguments:
    
                    // argument isStandardType
                    bool
                    a0 =
                    (bool)
                    
                    context->argument( 0 ).
                    toBool();
                
                    // argument is reference
                    RResourceList < RLinetypePattern >*
                    ap1 =
                    qscriptvalue_cast<
                    RResourceList < RLinetypePattern >*
                        >(
                        context->argument(
                        1
                        )
                    );
                    if( ap1 == NULL ){
                           return REcmaHelper::throwError("RLinetypeList: Argument 1 is not of type RResourceList < RLinetypePattern >*.",
                               context);                    
                    }
                    RResourceList < RLinetypePattern >& a1 = *ap1;
                
    // end of arguments

    // call C++ function:
    // return type 'void'
    RLinetypeList::
       init(a0
        ,
    a1);
    } else


        
            {
               return REcmaHelper::throwError("Wrong number/types of arguments for RLinetypeList.init().",
                   context);
            }
            REcmaHelper::functionEnd("REcmaLinetypeList::init", context, engine);
            return result;
        }
         QScriptValue REcmaLinetypeList::toString
    (QScriptContext *context, QScriptEngine *engine)
    
    {

    RLinetypeList* self = getSelf("toString", context);
    
    QString result;
    
            result = QString("RLinetypeList(0x%1)").arg((unsigned long int)self, 0, 16);
        
    return QScriptValue(result);
    }
     QScriptValue REcmaLinetypeList::destroy(QScriptContext *context, QScriptEngine *engine)
    
    {

        RLinetypeList* self = getSelf("RLinetypeList", context);
        //Q_ASSERT(self!=NULL);
        if (self==NULL) {
            return REcmaHelper::throwError("self is NULL", context);
        }
        
    
        delete self;
        context->thisObject().setData(engine->nullValue());
        context->thisObject().prototype().setData(engine->nullValue());
        context->thisObject().setPrototype(engine->nullValue());
        context->thisObject().setScriptClass(NULL);
        return engine->undefinedValue();
    }
    RLinetypeList* REcmaLinetypeList::getSelf(const QString& fName, QScriptContext* context)
    
        {
            RLinetypeList* self = NULL;

            
                // self could be a normal object (e.g. from an UI file) or
                // an ECMA shell object (made from an ECMA script):
                //self = getSelfShell(fName, context);
                

            //if (self==NULL) {
                self = REcmaHelper::scriptValueTo<RLinetypeList >(context->thisObject())
                
                ;
            //}

            if (self == NULL){
                // avoid recursion (toString is used by the backtrace):
                if (fName!="toString") {
                    REcmaHelper::throwError(QString("RLinetypeList.%1(): "
                        "This object is not a RLinetypeList").arg(fName),
                        context);
                }
                return NULL;
            }

            return self;
        }
        RLinetypeList* REcmaLinetypeList::getSelfShell(const QString& fName, QScriptContext* context)
    
        {
          RLinetypeList* selfBase = getSelf(fName, context);
                RLinetypeList* self = dynamic_cast<RLinetypeList*>(selfBase);
                //return REcmaHelper::scriptValueTo<RLinetypeList >(context->thisObject());
            if(self == NULL){
                REcmaHelper::throwError(QString("RLinetypeList.%1(): "
                    "This object is not a RLinetypeList").arg(fName),
                    context);
            }

            return self;
            


        }
        